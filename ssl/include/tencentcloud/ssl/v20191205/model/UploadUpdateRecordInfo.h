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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATERECORDINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATERECORDINFO_H_

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
                * Deployment record list information.
                */
                class UploadUpdateRecordInfo : public AbstractModel
                {
                public:
                    UploadUpdateRecordInfo();
                    ~UploadUpdateRecordInfo() = default;
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
                     * 获取Original certificate ID
                     * @return OldCertId Original certificate ID
                     * 
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 设置Original certificate ID
                     * @param _oldCertId Original certificate ID
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
                     * 获取Deployment resource type list.
                     * @return ResourceTypes Deployment resource type list.
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置Deployment resource type list.
                     * @param _resourceTypes Deployment resource type list.
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
                     * 获取Deployment state.
                     * @return Status Deployment state.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Deployment state.
                     * @param _status Deployment state.
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
                     * 获取Deployment time.
                     * @return CreateTime Deployment time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Deployment time.
                     * @param _createTime Deployment time.
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
                     * 获取Last update time.
                     * @return UpdateTime Last update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time.
                     * @param _updateTime Last update time.
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
                     * Original certificate ID
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                    /**
                     * Deployment resource type list.
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * Deployment state.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Deployment time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATERECORDINFO_H_
