class GX_NET_MASK
{
    options[] = { "Camo", "Size", "Variant" }; // Always computed, do not edit
    label = "GX - Net Mask";
    class Camo
    {
        alwaysSelectable = 1;
        values[] = { "DESERT", "GREEN", "KKO", "MTP", "TAN", "URBAN", "WINTER", "WOODLAND" }; // Always computed, do not edit
		class DESERT
		{
			label = "DESERT";
			image = "GX_NET_MASK\Data\UI\GX_Desert_Icon.paa";
		};
		class GREEN
		{
			label = "GREEN";
			image = "GX_NET_MASK\Data\UI\GX_Green_Icon.paa";
		};
		class KKO
		{
			label = "KKO";
			image = "GX_NET_MASK\Data\UI\GX_KKO_Icon.paa";
		};
		class MTP
		{
			label = "MTP";
			image = "GX_NET_MASK\Data\UI\GX_MTP_Icon.paa";
		};
		class TAN
		{
			label = "TAN";
			image = "GX_NET_MASK\Data\UI\GX_Tan_Icon.paa";
		};
		class URBAN
		{
			label = "URBAN";
			image = "GX_NET_MASK\Data\UI\GX_Urban_Icon.paa";
		};
		class WINTER
		{
			label = "WINTER";
			image = "GX_NET_MASK\Data\UI\GX_Winter_Icon.paa";
		};
		class WOODLAND
		{
			label = "WOODLAND";
			image = "GX_NET_MASK\Data\UI\GX_Woodland_Icon.paa";
		};
    };
    class Size
    {
        label = "Size";
        alwaysSelectable = 1;
        values[] = { "A3_COMBAT_HELMET", "GX_BALLISTIC_MASK", "RHS_PRO_TECH" };
    };
	class Variant
    {
        label = "Variant";
        alwaysSelectable = 1;
        values[] = { "V1", "V2" };
    };
};
