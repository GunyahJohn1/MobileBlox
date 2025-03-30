#pragma once

#include <string>

// Lua UI we execute
std::string LuaUI = R"(

local MobileBlox = Instance.new("ScreenGui")
local Frame = Instance.new("Frame")
local btn = Instance.new("TextButton")
local box = Instance.new("TextBox")
local btn_2 = Instance.new("TextButton")
local ImageLabel = Instance.new("ImageLabel")

--Properties:

MobileBlox.Name = "MobileBlox"
MobileBlox.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
MobileBlox.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Frame.Parent = MobileBlox
Frame.BackgroundColor3 = Color3.fromRGB(70, 71, 71)
Frame.BorderColor3 = Color3.fromRGB(0, 0, 0)
Frame.BorderSizePixel = 0
Frame.Position = UDim2.new(0.218377084, 0, 0.254838705, 0)
Frame.Size = UDim2.new(0, 964, 0, 608)
Frame.Style = Enum.FrameStyle.RobloxRound

btn.Name = "btn"
btn.Parent = Frame
btn.BackgroundColor3 = Color3.fromRGB(155, 157, 157)
btn.BorderColor3 = Color3.fromRGB(0, 0, 0)
btn.BorderSizePixel = 0
btn.Position = UDim2.new(0.0305508822, 0, 0.887107432, 0)
btn.Size = UDim2.new(0, 200, 0, 50)
btn.Style = Enum.ButtonStyle.RobloxRoundButton
btn.Font = Enum.Font.SourceSans
btn.Text = "Execute"
btn.TextColor3 = Color3.fromRGB(0, 0, 0)
btn.TextSize = 14.000

box.Name = "box"
box.Parent = Frame
box.BackgroundColor3 = Color3.fromRGB(164, 166, 166)
box.BackgroundTransparency = 0.500
box.BorderColor3 = Color3.fromRGB(0, 0, 0)
box.BorderSizePixel = 0
box.Position = UDim2.new(0.00936826319, 0, 0.0244906582, 0)
box.Size = UDim2.new(0, 924, 0, 489)
box.Font = Enum.Font.Unknown
box.Text = ""
box.TextColor3 = Color3.fromRGB(0, 0, 0)
box.TextSize = 14.000
box.TextXAlignment = Enum.TextXAlignment.Left
box.TextYAlignment = Enum.TextYAlignment.Top

btn_2.Name = "btn"
btn_2.Parent = Frame
btn_2.BackgroundColor3 = Color3.fromRGB(155, 157, 157)
btn_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
btn_2.BorderSizePixel = 0
btn_2.Position = UDim2.new(0.742626011, 0, 0.876204669, 0)
btn_2.Size = UDim2.new(0, 200, 0, 50)
btn_2.Style = Enum.ButtonStyle.RobloxRoundButton
btn_2.Font = Enum.Font.SourceSans
btn_2.Text = "Clear"
btn_2.TextColor3 = Color3.fromRGB(0, 0, 0)
btn_2.TextSize = 14.000

ImageLabel.Parent = MobileBlox
ImageLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
ImageLabel.BackgroundTransparency = 1.000
ImageLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
ImageLabel.BorderSizePixel = 0
ImageLabel.Position = UDim2.new(0.470167071, 0, 0.730912566, 0)
ImageLabel.Size = UDim2.new(0, 100, 0, 96)
ImageLabel.Image = "http://www.roblox.com/asset/?id=137134606494396"

-- Scripts:

local function XHYNWKD_fake_script() -- btn.Script 
	local script = Instance.new('Script', btn)

	coroutine.wrap(NBUT_fake_script)()
	local function OBDPHLQ_fake_script() -- Execute.LocalScript
		local script = Instance.new('LocalScript', Execute)
	
		local box = script.Parent.Parent.TextBox
		local btn = script.Parent
	
		btn.MouseButton1Click:Connect(function()
			loadstring(box.Text)()
		end)
	end
end
coroutine.wrap(XHYNWKD_fake_script)()
local function WAAD_fake_script() -- btn_2.Script 
	local script = Instance.new('Script', btn_2)

	coroutine.wrap(BGWS_fake_script)()
	local function NBUT_fake_script() -- Clear.LocalScript
		local script = Instance.new('LocalScript', Clear)
	
		local box = script.Parent.Parent.TextBox
		local btn = script.Parent
	
		btn.MouseButton1Click:Connect(function()
			box.Text = "";
		end)
	end
end
coroutine.wrap(WAAD_fake_script)()
