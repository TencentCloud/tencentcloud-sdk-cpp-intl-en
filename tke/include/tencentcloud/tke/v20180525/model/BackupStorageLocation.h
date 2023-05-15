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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_BACKUPSTORAGELOCATION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_BACKUPSTORAGELOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Storage repository information
                */
                class BackupStorageLocation : public AbstractModel
                {
                public:
                    BackupStorageLocation();
                    ~BackupStorageLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup repository name	
                     * @return Name Backup repository name	
                     */
                    std::string GetName() const;

                    /**
                     * 设置Backup repository name	
                     * @param Name Backup repository name	
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Repository region, such as `ap-guangzhou`	
                     * @return StorageRegion Repository region, such as `ap-guangzhou`	
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Repository region, such as `ap-guangzhou`	
                     * @param StorageRegion Repository region, such as `ap-guangzhou`	
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取The provider of storage service. It defaults to Tencent Cloud. 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Provider The provider of storage service. It defaults to Tencent Cloud. 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置The provider of storage service. It defaults to Tencent Cloud. 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param Provider The provider of storage service. It defaults to Tencent Cloud. 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取COS bucket name. For COS storage type, it must start with the prefix `tke-backup`. 	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bucket COS bucket name. For COS storage type, it must start with the prefix `tke-backup`. 	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket name. For COS storage type, it must start with the prefix `tke-backup`. 	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Bucket COS bucket name. For COS storage type, it must start with the prefix `tke-backup`. 	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS bucket path 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path COS bucket path 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPath() const;

                    /**
                     * 设置COS bucket path 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Path COS bucket path 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Storage repository status 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return State Storage repository status 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Storage repository status 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param State Storage repository status 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Status information 	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Status information 	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Status information 	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Message Status information 	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Last checked time 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return LastValidationTime Last checked time 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastValidationTime() const;

                    /**
                     * 设置Last checked time 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param LastValidationTime Last checked time 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastValidationTime(const std::string& _lastValidationTime);

                    /**
                     * 判断参数 LastValidationTime 是否已赋值
                     * @return LastValidationTime 是否已赋值
                     */
                    bool LastValidationTimeHasBeenSet() const;

                private:

                    /**
                     * Backup repository name	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Repository region, such as `ap-guangzhou`	
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * The provider of storage service. It defaults to Tencent Cloud. 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * COS bucket name. For COS storage type, it must start with the prefix `tke-backup`. 	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS bucket path 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Storage repository status 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Status information 	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Last checked time 	
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastValidationTime;
                    bool m_lastValidationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_BACKUPSTORAGELOCATION_H_
