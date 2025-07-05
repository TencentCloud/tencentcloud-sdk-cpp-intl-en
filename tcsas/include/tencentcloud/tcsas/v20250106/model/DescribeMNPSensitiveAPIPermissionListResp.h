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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONLISTRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONLISTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionListData.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * List of sensitive APIs that can be called by a mini program
                */
                class DescribeMNPSensitiveAPIPermissionListResp : public AbstractModel
                {
                public:
                    DescribeMNPSensitiveAPIPermissionListResp();
                    ~DescribeMNPSensitiveAPIPermissionListResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataList List data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DescribeMNPSensitiveAPIPermissionListData> GetDataList() const;

                    /**
                     * 设置List data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataList List data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataList(const std::vector<DescribeMNPSensitiveAPIPermissionListData>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribeMNPSensitiveAPIPermissionListData> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONLISTRESP_H_
