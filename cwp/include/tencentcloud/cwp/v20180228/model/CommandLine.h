/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_COMMANDLINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_COMMANDLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Command line content.
                */
                class CommandLine : public AbstractModel
                {
                public:
                    CommandLine();
                    ~CommandLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path, which needs to be encrypted using Base64.
                     * @return Exe Path, which needs to be encrypted using Base64.
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Path, which needs to be encrypted using Base64.
                     * @param _exe Path, which needs to be encrypted using Base64.
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取Command line, which needs to be encrypted using Base64.
                     * @return Cmdline Command line, which needs to be encrypted using Base64.
                     * 
                     */
                    std::string GetCmdline() const;

                    /**
                     * 设置Command line, which needs to be encrypted using Base64.
                     * @param _cmdline Command line, which needs to be encrypted using Base64.
                     * 
                     */
                    void SetCmdline(const std::string& _cmdline);

                    /**
                     * 判断参数 Cmdline 是否已赋值
                     * @return Cmdline 是否已赋值
                     * 
                     */
                    bool CmdlineHasBeenSet() const;

                private:

                    /**
                     * Path, which needs to be encrypted using Base64.
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * Command line, which needs to be encrypted using Base64.
                     */
                    std::string m_cmdline;
                    bool m_cmdlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_COMMANDLINE_H_
