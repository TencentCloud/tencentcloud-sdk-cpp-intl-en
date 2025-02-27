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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/UpdateSyncProgressRegion.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Update the progress of asynchronous task.
                */
                class UpdateSyncProgress : public AbstractModel
                {
                public:
                    UpdateSyncProgress();
                    ~UpdateSyncProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _resourceType Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Region result list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdateSyncProgressRegions Region result list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UpdateSyncProgressRegion> GetUpdateSyncProgressRegions() const;

                    /**
                     * 设置Region result list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _updateSyncProgressRegions Region result list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateSyncProgressRegions(const std::vector<UpdateSyncProgressRegion>& _updateSyncProgressRegions);

                    /**
                     * 判断参数 UpdateSyncProgressRegions 是否已赋值
                     * @return UpdateSyncProgressRegions 是否已赋值
                     * 
                     */
                    bool UpdateSyncProgressRegionsHasBeenSet() const;

                    /**
                     * 获取Asynchronous update progress status: 0, pending, 1 processed, 3 processing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Asynchronous update progress status: 0, pending, 1 processed, 3 processing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Asynchronous update progress status: 0, pending, 1 processed, 3 processing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _status Asynchronous update progress status: 0, pending, 1 processed, 3 processing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Region result list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UpdateSyncProgressRegion> m_updateSyncProgressRegions;
                    bool m_updateSyncProgressRegionsHasBeenSet;

                    /**
                     * Asynchronous update progress status: 0, pending, 1 processed, 3 processing.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESS_H_
