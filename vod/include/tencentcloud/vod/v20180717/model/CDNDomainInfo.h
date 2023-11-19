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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAININFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/CDNDomainConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CDN domain name information
                */
                class CDNDomainInfo : public AbstractModel
                {
                public:
                    CDNDomainInfo();
                    ~CDNDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain.
                     * @return Domain Domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain.
                     * @param _domain Domain.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Deployment status.
                     * @return DeployStatus Deployment status.
                     * 
                     */
                    std::string GetDeployStatus() const;

                    /**
                     * 设置Deployment status.
                     * @param _deployStatus Deployment status.
                     * 
                     */
                    void SetDeployStatus(const std::string& _deployStatus);

                    /**
                     * 判断参数 DeployStatus 是否已赋值
                     * @return DeployStatus 是否已赋值
                     * 
                     */
                    bool DeployStatusHasBeenSet() const;

                    /**
                     * 获取Cname record.
                     * @return Cname Cname record.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Cname record.
                     * @param _cname Cname record.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Create Time
                     * @return CreateTime Create Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Create Time
                     * @param _createTime Create Time
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
                     * 获取CDN domain name configuration information. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Config CDN domain name configuration information. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    CDNDomainConfig GetConfig() const;

                    /**
                     * 设置CDN domain name configuration information. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _config CDN domain name configuration information. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConfig(const CDNDomainConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * Domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Deployment status.
                     */
                    std::string m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * Cname record.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Create Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * CDN domain name configuration information. 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CDNDomainConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNDOMAININFO_H_
