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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESSREGION_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESSREGION_H_

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
                * Update the progress of asynchronous task.
                */
                class UpdateSyncProgressRegion : public AbstractModel
                {
                public:
                    UpdateSyncProgressRegion();
                    ~UpdateSyncProgressRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Region Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _region Resource type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Total number
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total number
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Quantity of executions completed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OffsetCount Quantity of executions completed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOffsetCount() const;

                    /**
                     * 设置Quantity of executions completed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _offsetCount Quantity of executions completed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOffsetCount(const int64_t& _offsetCount);

                    /**
                     * 判断参数 OffsetCount 是否已赋值
                     * @return OffsetCount 是否已赋值
                     * 
                     */
                    bool OffsetCountHasBeenSet() const;

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
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Total number
.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Quantity of executions completed.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_offsetCount;
                    bool m_offsetCountHasBeenSet;

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

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATESYNCPROGRESSREGION_H_
