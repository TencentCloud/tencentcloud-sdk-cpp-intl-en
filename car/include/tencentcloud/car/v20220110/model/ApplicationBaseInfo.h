/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_APPLICATIONBASEINFO_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_APPLICATIONBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Application basic data.
                */
                class ApplicationBaseInfo : public AbstractModel
                {
                public:
                    ApplicationBaseInfo();
                    ~ApplicationBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application window usage mode (ApplicationDesktop: Captures the entire desktop; ApplicationWindow: Captures only the application window).
                     * @return WindowUseType Application window usage mode (ApplicationDesktop: Captures the entire desktop; ApplicationWindow: Captures only the application window).
                     * 
                     */
                    std::string GetWindowUseType() const;

                    /**
                     * 设置Application window usage mode (ApplicationDesktop: Captures the entire desktop; ApplicationWindow: Captures only the application window).
                     * @param _windowUseType Application window usage mode (ApplicationDesktop: Captures the entire desktop; ApplicationWindow: Captures only the application window).
                     * 
                     */
                    void SetWindowUseType(const std::string& _windowUseType);

                    /**
                     * 判断参数 WindowUseType 是否已赋值
                     * @return WindowUseType 是否已赋值
                     * 
                     */
                    bool WindowUseTypeHasBeenSet() const;

                    /**
                     * 获取Application window name.
                     * @return WindowName Application window name.
                     * 
                     */
                    std::string GetWindowName() const;

                    /**
                     * 设置Application window name.
                     * @param _windowName Application window name.
                     * 
                     */
                    void SetWindowName(const std::string& _windowName);

                    /**
                     * 判断参数 WindowName 是否已赋值
                     * @return WindowName 是否已赋值
                     * 
                     */
                    bool WindowNameHasBeenSet() const;

                    /**
                     * 获取Application window class name.
                     * @return WindowClassName Application window class name.
                     * 
                     */
                    std::string GetWindowClassName() const;

                    /**
                     * 设置Application window class name.
                     * @param _windowClassName Application window class name.
                     * 
                     */
                    void SetWindowClassName(const std::string& _windowClassName);

                    /**
                     * 判断参数 WindowClassName 是否已赋值
                     * @return WindowClassName 是否已赋值
                     * 
                     */
                    bool WindowClassNameHasBeenSet() const;

                    /**
                     * 获取Application window capture mode (HOOK: default mode; DDA_CUT: compatible mode).
                     * @return WindowCaptureMode Application window capture mode (HOOK: default mode; DDA_CUT: compatible mode).
                     * 
                     */
                    std::string GetWindowCaptureMode() const;

                    /**
                     * 设置Application window capture mode (HOOK: default mode; DDA_CUT: compatible mode).
                     * @param _windowCaptureMode Application window capture mode (HOOK: default mode; DDA_CUT: compatible mode).
                     * 
                     */
                    void SetWindowCaptureMode(const std::string& _windowCaptureMode);

                    /**
                     * 判断参数 WindowCaptureMode 是否已赋值
                     * @return WindowCaptureMode 是否已赋值
                     * 
                     */
                    bool WindowCaptureModeHasBeenSet() const;

                private:

                    /**
                     * Application window usage mode (ApplicationDesktop: Captures the entire desktop; ApplicationWindow: Captures only the application window).
                     */
                    std::string m_windowUseType;
                    bool m_windowUseTypeHasBeenSet;

                    /**
                     * Application window name.
                     */
                    std::string m_windowName;
                    bool m_windowNameHasBeenSet;

                    /**
                     * Application window class name.
                     */
                    std::string m_windowClassName;
                    bool m_windowClassNameHasBeenSet;

                    /**
                     * Application window capture mode (HOOK: default mode; DDA_CUT: compatible mode).
                     */
                    std::string m_windowCaptureMode;
                    bool m_windowCaptureModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_APPLICATIONBASEINFO_H_
