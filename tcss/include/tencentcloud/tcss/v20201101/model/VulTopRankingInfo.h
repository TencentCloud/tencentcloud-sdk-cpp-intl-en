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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULTOPRANKINGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULTOPRANKINGINFO_H_

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
                * Ranking of top vulnerabilities
                */
                class VulTopRankingInfo : public AbstractModel
                {
                public:
                    VulTopRankingInfo();
                    ~VulTopRankingInfo() = default;
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
                     * 获取Severity. Valid values: `CRITICAL` (critical); `HIGH` (high);`MIDDLE` (medium);`LOW` (low).
                     * @return Level Severity. Valid values: `CRITICAL` (critical); `HIGH` (high);`MIDDLE` (medium);`LOW` (low).
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Severity. Valid values: `CRITICAL` (critical); `HIGH` (high);`MIDDLE` (medium);`LOW` (low).
                     * @param _level Severity. Valid values: `CRITICAL` (critical); `HIGH` (high);`MIDDLE` (medium);`LOW` (low).
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Number of affected images
                     * @return AffectedImageCount Number of affected images
                     * 
                     */
                    int64_t GetAffectedImageCount() const;

                    /**
                     * 设置Number of affected images
                     * @param _affectedImageCount Number of affected images
                     * 
                     */
                    void SetAffectedImageCount(const int64_t& _affectedImageCount);

                    /**
                     * 判断参数 AffectedImageCount 是否已赋值
                     * @return AffectedImageCount 是否已赋值
                     * 
                     */
                    bool AffectedImageCountHasBeenSet() const;

                    /**
                     * 获取Number of affected containers
                     * @return AffectedContainerCount Number of affected containers
                     * 
                     */
                    int64_t GetAffectedContainerCount() const;

                    /**
                     * 设置Number of affected containers
                     * @param _affectedContainerCount Number of affected containers
                     * 
                     */
                    void SetAffectedContainerCount(const int64_t& _affectedContainerCount);

                    /**
                     * 判断参数 AffectedContainerCount 是否已赋值
                     * @return AffectedContainerCount 是否已赋值
                     * 
                     */
                    bool AffectedContainerCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return ID Vulnerability ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _iD Vulnerability ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

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

                private:

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Severity. Valid values: `CRITICAL` (critical); `HIGH` (high);`MIDDLE` (medium);`LOW` (low).
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Number of affected images
                     */
                    int64_t m_affectedImageCount;
                    bool m_affectedImageCountHasBeenSet;

                    /**
                     * Number of affected containers
                     */
                    int64_t m_affectedContainerCount;
                    bool m_affectedContainerCountHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * POC ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULTOPRANKINGINFO_H_
