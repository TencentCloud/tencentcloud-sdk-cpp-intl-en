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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SCANIGNOREVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SCANIGNOREVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Scan for ignored vulnerabilities
                */
                class ScanIgnoreVul : public AbstractModel
                {
                public:
                    ScanIgnoreVul();
                    ~ScanIgnoreVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability CVE ID
                     * @return CVEID Vulnerability CVE ID
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置Vulnerability CVE ID
                     * @param _cVEID Vulnerability CVE ID
                     * 
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取POC ID
                     * @return PocID POC ID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置POC ID
                     * @param _pocID POC ID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取Number of ignored repository images
                     * @return RegistryImageCount Number of ignored repository images
                     * 
                     */
                    int64_t GetRegistryImageCount() const;

                    /**
                     * 设置Number of ignored repository images
                     * @param _registryImageCount Number of ignored repository images
                     * 
                     */
                    void SetRegistryImageCount(const int64_t& _registryImageCount);

                    /**
                     * 判断参数 RegistryImageCount 是否已赋值
                     * @return RegistryImageCount 是否已赋值
                     * 
                     */
                    bool RegistryImageCountHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to ignore all images. Valid values: `0` (no); `1` (yes).
                     * @return IsIgnoreAll Whether to ignore all images. Valid values: `0` (no); `1` (yes).
                     * 
                     */
                    int64_t GetIsIgnoreAll() const;

                    /**
                     * 设置Whether to ignore all images. Valid values: `0` (no); `1` (yes).
                     * @param _isIgnoreAll Whether to ignore all images. Valid values: `0` (no); `1` (yes).
                     * 
                     */
                    void SetIsIgnoreAll(const int64_t& _isIgnoreAll);

                    /**
                     * 判断参数 IsIgnoreAll 是否已赋值
                     * @return IsIgnoreAll 是否已赋值
                     * 
                     */
                    bool IsIgnoreAllHasBeenSet() const;

                    /**
                     * 获取Number of ignored local images
                     * @return LocalImageCount Number of ignored local images
                     * 
                     */
                    int64_t GetLocalImageCount() const;

                    /**
                     * 设置Number of ignored local images
                     * @param _localImageCount Number of ignored local images
                     * 
                     */
                    void SetLocalImageCount(const int64_t& _localImageCount);

                    /**
                     * 判断参数 LocalImageCount 是否已赋值
                     * @return LocalImageCount 是否已赋值
                     * 
                     */
                    bool LocalImageCountHasBeenSet() const;

                private:

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability CVE ID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * POC ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * Number of ignored repository images
                     */
                    int64_t m_registryImageCount;
                    bool m_registryImageCountHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether to ignore all images. Valid values: `0` (no); `1` (yes).
                     */
                    int64_t m_isIgnoreAll;
                    bool m_isIgnoreAllHasBeenSet;

                    /**
                     * Number of ignored local images
                     */
                    int64_t m_localImageCount;
                    bool m_localImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SCANIGNOREVUL_H_
