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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterInstallCommand response structure.
                */
                class DescribeClusterInstallCommandResponse : public AbstractModel
                {
                public:
                    DescribeClusterInstallCommandResponse();
                    ~DescribeClusterInstallCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Access command.</p>
                     * @return Command <p>Access command.</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取<p>File download link integration</p>
                     * @return URL <p>File download link integration</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>Integrate file content</p>
                     * @return FileContent <p>Integrate file content</p>
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * <p>Access command.</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>File download link integration</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>Integrate file content</p>
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDRESPONSE_H_
