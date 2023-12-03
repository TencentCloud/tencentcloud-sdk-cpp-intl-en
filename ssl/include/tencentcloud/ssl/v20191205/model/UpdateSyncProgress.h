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
                * 
                */
                class UpdateSyncProgress : public AbstractModel
                {
                public:
                    UpdateSyncProgress();
                    ~UpdateSyncProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ResourceType 
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置
                     * @param _resourceType 
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
                     * 获取
                     * @return UpdateSyncProgressRegions 
                     * 
                     */
                    std::vector<UpdateSyncProgressRegion> GetUpdateSyncProgressRegions() const;

                    /**
                     * 设置
                     * @param _updateSyncProgressRegions 
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
                     * 获取
                     * @return Status 
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<UpdateSyncProgressRegion> m_updateSyncProgressRegions;
                    bool m_updateSyncProgressRegionsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESS_H_
