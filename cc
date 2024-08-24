-- Generated using RoadToGlory's Converter v1.1 (RoadToGlory#9879)

-- Instances:

local Converted = {
	["_ScreenGui"] = Instance.new("ScreenGui");
	["_Frame"] = Instance.new("Frame");
	["_UIAspectRatioConstraint"] = Instance.new("UIAspectRatioConstraint");
	["_UICorner"] = Instance.new("UICorner");
	["_UIStroke"] = Instance.new("UIStroke");
	["_UIGradient"] = Instance.new("UIGradient");
	["_LocalScript"] = Instance.new("LocalScript");
	["_skip"] = Instance.new("TextButton");
	["_ImageLabel"] = Instance.new("ImageLabel");
	["_ImageButton"] = Instance.new("ImageButton");
	["_UIStroke1"] = Instance.new("UIStroke");
}

-- Properties:

Converted["_ScreenGui"].Parent = game:GetService("CoreGui")

Converted["_Frame"].AnchorPoint = Vector2.new(0.5, 0.5)
Converted["_Frame"].BackgroundColor3 = Color3.fromRGB(0, 0, 0)
Converted["_Frame"].BorderColor3 = Color3.fromRGB(0, 0, 0)
Converted["_Frame"].BorderSizePixel = 0
Converted["_Frame"].Position = UDim2.new(0.518181741, 0, 0.0730968863, 0)
Converted["_Frame"].Size = UDim2.new(0.43550244, 0, 0.1107134, 0)
Converted["_Frame"].Parent = Converted["_ScreenGui"]

Converted["_UIAspectRatioConstraint"].AspectRatio = 5.869999885559082
Converted["_UIAspectRatioConstraint"].Parent = Converted["_Frame"]

Converted["_UICorner"].Parent = Converted["_Frame"]

Converted["_UIStroke"].Color = Color3.fromRGB(170.0000050663948, 255, 255)
Converted["_UIStroke"].Thickness = 5.800000190734863
Converted["_UIStroke"].Parent = Converted["_Frame"]

Converted["_UIGradient"].Color = ColorSequence.new{
	ColorSequenceKeypoint.new(0, Color3.fromRGB(120.00000044703484, 127.00000002980232, 255)),
	ColorSequenceKeypoint.new(1, Color3.fromRGB(143.00000667572021, 255, 221.00000202655792))
}
Converted["_UIGradient"].Parent = Converted["_UIStroke"]

Converted["_skip"].Font = Enum.Font.SourceSans
Converted["_skip"].Text = "Skip Player"
Converted["_skip"].TextColor3 = Color3.fromRGB(0, 0, 0)
Converted["_skip"].TextSize = 14
Converted["_skip"].BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Converted["_skip"].BorderColor3 = Color3.fromRGB(0, 0, 0)
Converted["_skip"].BorderSizePixel = 0
Converted["_skip"].Position = UDim2.new(1.38166022, 0, 0.242216751, 0)
Converted["_skip"].Size = UDim2.new(0, 200, 0, 50)
Converted["_skip"].Name = "skip"
Converted["_skip"].Parent = Converted["_Frame"]

Converted["_ImageLabel"].Image = "http://www.roblox.com/asset/?id=83826286188824"
Converted["_ImageLabel"].BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Converted["_ImageLabel"].BorderColor3 = Color3.fromRGB(0, 0, 0)
Converted["_ImageLabel"].BorderSizePixel = 0
Converted["_ImageLabel"].Position = UDim2.new(0.949999988, 0, -0.400000006, 0)
Converted["_ImageLabel"].Size = UDim2.new(0, 102, 0, 89)
Converted["_ImageLabel"].Parent = Converted["_skip"]

Converted["_ImageButton"].Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"
Converted["_ImageButton"].BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Converted["_ImageButton"].BorderColor3 = Color3.fromRGB(255, 255, 255)
Converted["_ImageButton"].BorderSizePixel = 0
Converted["_ImageButton"].Position = UDim2.new(0.494258374, 0, -0.0415224917, 0)
Converted["_ImageButton"].Size = UDim2.new(0, 100, 0, 100)
Converted["_ImageButton"].Parent = Converted["_ScreenGui"]

Converted["_UIStroke1"].Thickness = 2.4000000953674316
Converted["_UIStroke1"].Parent = Converted["_ImageButton"]

-- Fake Module Scripts:

local fake_module_scripts = {}


-- Fake Local Scripts:

local function CHUNM_fake_script() -- Fake Script: StarterGui.ScreenGui.Frame.UIStroke.UIGradient.LocalScript
    local script = Instance.new("LocalScript")
    script.Name = "LocalScript"
    script.Parent = Converted["_UIGradient"]
    local req = require
    local require = function(obj)
        local fake = fake_module_scripts[obj]
        if fake then
            return fake()
        end
        return req(obj)
    end

	local uiGradient = script.Parent
	local tweenService = game:GetService("TweenService")
	
	local gradientTweenInfo = TweenInfo.new(
		2,
	Enum.EasingStyler.Linear,
	Enum.EasingDirection.Inount,
		-1,
		false
		0
	)
	
	tweenServie:Creat(uiGradient, gradientTweenInfo, {Roatation = 360}):play()
end

coroutine.wrap(CHUNM_fake_script)()
