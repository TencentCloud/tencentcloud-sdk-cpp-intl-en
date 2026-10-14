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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTDIRREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTDIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ProtectHostConfig.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebPageProtectDir request structure.
                */
                class ModifyWebPageProtectDirRequest : public AbstractModel
                {
                public:
                    ModifyWebPageProtectDirRequest();
                    ~ModifyWebPageProtectDirRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Website protection directory address
                     * @return ProtectDirAddr Website protection directory address
                     * 
                     */
                    std::string GetProtectDirAddr() const;

                    /**
                     * 设置Website protection directory address
                     * @param _protectDirAddr Website protection directory address
                     * 
                     */
                    void SetProtectDirAddr(const std::string& _protectDirAddr);

                    /**
                     * 判断参数 ProtectDirAddr 是否已赋值
                     * @return ProtectDirAddr 是否已赋值
                     * 
                     */
                    bool ProtectDirAddrHasBeenSet() const;

                    /**
                     * 获取Name of the website protection directory
                     * @return ProtectDirName Name of the website protection directory
                     * 
                     */
                    std::string GetProtectDirName() const;

                    /**
                     * 设置Name of the website protection directory
                     * @param _protectDirName Name of the website protection directory
                     * 
                     */
                    void SetProtectDirName(const std::string& _protectDirName);

                    /**
                     * 判断参数 ProtectDirName 是否已赋值
                     * @return ProtectDirName 是否已赋值
                     * 
                     */
                    bool ProtectDirNameHasBeenSet() const;

                    /**
                     * 获取Protected file types, separated by semicolons
                     * @return ProtectFileType Protected file types, separated by semicolons
                     * 
                     */
                    std::string GetProtectFileType() const;

                    /**
                     * 设置Protected file types, separated by semicolons
                     * @param _protectFileType Protected file types, separated by semicolons
                     * 
                     */
                    void SetProtectFileType(const std::string& _protectFileType);

                    /**
                     * 判断参数 ProtectFileType 是否已赋值
                     * @return ProtectFileType 是否已赋值
                     * 
                     */
                    bool ProtectFileTypeHasBeenSet() const;

                    /**
                     * 获取Protection machine list information
                     * @return HostConfig Protection machine list information
                     * 
                     */
                    std::vector<ProtectHostConfig> GetHostConfig() const;

                    /**
                     * 设置Protection machine list information
                     * @param _hostConfig Protection machine list information
                     * 
                     */
                    void SetHostConfig(const std::vector<ProtectHostConfig>& _hostConfig);

                    /**
                     * 判断参数 HostConfig 是否已赋值
                     * @return HostConfig 是否已赋值
                     * 
                     */
                    bool HostConfigHasBeenSet() const;

                private:

                    /**
                     * Website protection directory address
                     */
                    std::string m_protectDirAddr;
                    bool m_protectDirAddrHasBeenSet;

                    /**
                     * Name of the website protection directory
                     */
                    std::string m_protectDirName;
                    bool m_protectDirNameHasBeenSet;

                    /**
                     * Protected file types, separated by semicolons
                     */
                    std::string m_protectFileType;
                    bool m_protectFileTypeHasBeenSet;

                    /**
                     * Protection machine list information
                     */
                    std::vector<ProtectHostConfig> m_hostConfig;
                    bool m_hostConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTDIRREQUEST_H_
