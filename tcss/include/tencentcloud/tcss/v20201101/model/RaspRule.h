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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULE_H_

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
                * RASP allowlist rule.
                */
                class RaspRule : public AbstractModel
                {
                public:
                    RaspRule();
                    ~RaspRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Regular expression for a custom request URL range. If this parameter is left blank, saving fails.
                     * @return URLRegexp Regular expression for a custom request URL range. If this parameter is left blank, saving fails.
                     * 
                     */
                    std::string GetURLRegexp() const;

                    /**
                     * 设置Regular expression for a custom request URL range. If this parameter is left blank, saving fails.
                     * @param _uRLRegexp Regular expression for a custom request URL range. If this parameter is left blank, saving fails.
                     * 
                     */
                    void SetURLRegexp(const std::string& _uRLRegexp);

                    /**
                     * 判断参数 URLRegexp 是否已赋值
                     * @return URLRegexp 是否已赋值
                     * 
                     */
                    bool URLRegexpHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return VulVulsID Vulnerability ID
                     * 
                     */
                    uint64_t GetVulVulsID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulVulsID Vulnerability ID
                     * 
                     */
                    void SetVulVulsID(const uint64_t& _vulVulsID);

                    /**
                     * 判断参数 VulVulsID 是否已赋值
                     * @return VulVulsID 是否已赋值
                     * 
                     */
                    bool VulVulsIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulVulsName Vulnerability name
                     * 
                     */
                    std::string GetVulVulsName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulVulsName Vulnerability name
                     * 
                     */
                    void SetVulVulsName(const std::string& _vulVulsName);

                    /**
                     * 判断参数 VulVulsName 是否已赋值
                     * @return VulVulsName 是否已赋值
                     * 
                     */
                    bool VulVulsNameHasBeenSet() const;

                    /**
                     * 获取cve_id
                     * @return CveID cve_id
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置cve_id
                     * @param _cveID cve_id
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     * @return SupportDefense Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     * 
                     */
                    uint64_t GetSupportDefense() const;

                    /**
                     * 设置Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     * @param _supportDefense Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     * 
                     */
                    void SetSupportDefense(const uint64_t& _supportDefense);

                    /**
                     * 判断参数 SupportDefense 是否已赋值
                     * @return SupportDefense 是否已赋值
                     * 
                     */
                    bool SupportDefenseHasBeenSet() const;

                    /**
                     * 获取Allowlisting scope. 0: Allowlist all requests; 1: Allowlist requests within a custom request scope.
                     * @return WhiteType Allowlisting scope. 0: Allowlist all requests; 1: Allowlist requests within a custom request scope.
                     * 
                     */
                    uint64_t GetWhiteType() const;

                    /**
                     * 设置Allowlisting scope. 0: Allowlist all requests; 1: Allowlist requests within a custom request scope.
                     * @param _whiteType Allowlisting scope. 0: Allowlist all requests; 1: Allowlist requests within a custom request scope.
                     * 
                     */
                    void SetWhiteType(const uint64_t& _whiteType);

                    /**
                     * 判断参数 WhiteType 是否已赋值
                     * @return WhiteType 是否已赋值
                     * 
                     */
                    bool WhiteTypeHasBeenSet() const;

                    /**
                     * 获取Status. 0: valid.
                     * @return Status Status. 0: valid.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0: valid.
                     * @param _status Status. 0: valid.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Regular expression for a custom request URL range. If this parameter is left blank, saving fails.
                     */
                    std::string m_uRLRegexp;
                    bool m_uRLRegexpHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulVulsID;
                    bool m_vulVulsIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulVulsName;
                    bool m_vulVulsNameHasBeenSet;

                    /**
                     * cve_id
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     */
                    uint64_t m_supportDefense;
                    bool m_supportDefenseHasBeenSet;

                    /**
                     * Allowlisting scope. 0: Allowlist all requests; 1: Allowlist requests within a custom request scope.
                     */
                    uint64_t m_whiteType;
                    bool m_whiteTypeHasBeenSet;

                    /**
                     * Status. 0: valid.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULE_H_
