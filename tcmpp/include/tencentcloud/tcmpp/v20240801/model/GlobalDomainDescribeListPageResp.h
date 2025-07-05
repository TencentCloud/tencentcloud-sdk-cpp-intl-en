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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINDESCRIBELISTPAGERESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINDESCRIBELISTPAGERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/GlobalDomainDescribeListInfoResp.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Global domain name page list
                */
                class GlobalDomainDescribeListPageResp : public AbstractModel
                {
                public:
                    GlobalDomainDescribeListPageResp();
                    ~GlobalDomainDescribeListPageResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of results
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total number of results
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
                     * 获取Domain name information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataList Domain name information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<GlobalDomainDescribeListInfoResp> GetDataList() const;

                    /**
                     * 设置Domain name information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataList Domain name information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataList(const std::vector<GlobalDomainDescribeListInfoResp>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * Total number of results
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Domain name information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GlobalDomainDescribeListInfoResp> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINDESCRIBELISTPAGERESP_H_
