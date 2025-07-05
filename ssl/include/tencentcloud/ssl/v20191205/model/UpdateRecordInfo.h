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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Deployment record information
                */
                class UpdateRecordInfo : public AbstractModel
                {
                public:
                    UpdateRecordInfo();
                    ~UpdateRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
                     * @return Id Record ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Record ID
                     * @param _id Record ID
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
                     * 获取New certificate ID
                     * @return CertId New certificate ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置New certificate ID
                     * @param _certId New certificate ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Old certificate ID
                     * @return OldCertId Old certificate ID
                     * 
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 设置Old certificate ID
                     * @param _oldCertId Old certificate ID
                     * 
                     */
                    void SetOldCertId(const std::string& _oldCertId);

                    /**
                     * 判断参数 OldCertId 是否已赋值
                     * @return OldCertId 是否已赋值
                     * 
                     */
                    bool OldCertIdHasBeenSet() const;

                    /**
                     * 获取Deployment resource type list
                     * @return ResourceTypes Deployment resource type list
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置Deployment resource type list
                     * @param _resourceTypes Deployment resource type list
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取Deployment region list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Regions Deployment region list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置Deployment region list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _regions Deployment region list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取Deployment status
                     * @return Status Deployment status
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Deployment status
                     * @param _status Deployment status
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
                     * 获取Deployment time
                     * @return CreateTime Deployment time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Deployment time
                     * @param _createTime Deployment time
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
                     * 获取Last update time
                     * @return UpdateTime Last update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time
                     * @param _updateTime Last update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * New certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Old certificate ID
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                    /**
                     * Deployment resource type list
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * Deployment region list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * Deployment status
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Deployment time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDINFO_H_
