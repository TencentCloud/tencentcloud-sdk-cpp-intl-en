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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_DATABASE_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_DATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * Database-related information.
                */
                class Database : public AbstractModel
                {
                public:
                    Database();
                    ~Database() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterID Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterID Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Database name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Database name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Database name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Cold storage time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoolDownInDays Cold storage time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCoolDownInDays() const;

                    /**
                     * 设置Cold storage time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _coolDownInDays Cold storage time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCoolDownInDays(const int64_t& _coolDownInDays);

                    /**
                     * 判断参数 CoolDownInDays 是否已赋值
                     * @return CoolDownInDays 是否已赋值
                     * 
                     */
                    bool CoolDownInDaysHasBeenSet() const;

                    /**
                     * 获取Data retention time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetentionInDays Data retention time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRetentionInDays() const;

                    /**
                     * 设置Data retention time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retentionInDays Data retention time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetentionInDays(const int64_t& _retentionInDays);

                    /**
                     * 判断参数 RetentionInDays 是否已赋值
                     * @return RetentionInDays 是否已赋值
                     * 
                     */
                    bool RetentionInDaysHasBeenSet() const;

                    /**
                     * 获取Remarks.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Status. 0: initializing resources; 1: creating resources; 2: normal status; 3: deleting resources; 4: deleted resources; 5: disabling resources; 6: disabled resources; 7: abnormal resources, and manual operation is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status. 0: initializing resources; 1: creating resources; 2: normal status; 3: deleting resources; 4: deleted resources; 5: disabling resources; 6: disabled resources; 7: abnormal resources, and manual operation is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: initializing resources; 1: creating resources; 2: normal status; 3: deleting resources; 4: deleted resources; 5: disabling resources; 6: disabled resources; 7: abnormal resources, and manual operation is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status. 0: initializing resources; 1: creating resources; 2: normal status; 3: deleting resources; 4: deleted resources; 5: disabling resources; 6: disabled resources; 7: abnormal resources, and manual operation is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Database name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cold storage time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_coolDownInDays;
                    bool m_coolDownInDaysHasBeenSet;

                    /**
                     * Data retention time (days).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_retentionInDays;
                    bool m_retentionInDaysHasBeenSet;

                    /**
                     * Remarks.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Status. 0: initializing resources; 1: creating resources; 2: normal status; 3: deleting resources; 4: deleted resources; 5: disabling resources; 6: disabled resources; 7: abnormal resources, and manual operation is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_DATABASE_H_
