
#include "properties/DependsBase.hh"

class Depends : public DependsBase, virtual public property {
	public:
		virtual std::string name() const override;
		virtual bool parse(const Properties&, keyval_t&) override;
		virtual Ex dependencies(Ex::iterator) const override;
		virtual std::string unnamed_argument() const override { return "dependants"; };
	private:
		Ex dependencies_;
};
