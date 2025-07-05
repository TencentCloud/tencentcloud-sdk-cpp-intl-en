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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDCOUNTINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Count info of the queried record list
                */
                class RecordCountInfo : public AbstractModel
                {
                public:
                    RecordCountInfo();
                    ~RecordCountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The subdomain count.
                     * @return SubdomainCount The subdomain count.
                     * 
                     */
                    uint64_t GetSubdomainCount() const;

                    /**
                     * 设置The subdomain count.
                     * @param _subdomainCount The subdomain count.
                     * 
                     */
                    void SetSubdomainCount(const uint64_t& _subdomainCount);

                    /**
                     * 判断参数 SubdomainCount 是否已赋值
                     * @return SubdomainCount 是否已赋值
                     * 
                     */
                    bool SubdomainCountHasBeenSet() const;

                    /**
                     * 获取The count of records returned in the list.
                     * @return ListCount The count of records returned in the list.
                     * 
                     */
                    uint64_t GetListCount() const;

                    /**
                     * 设置The count of records returned in the list.
                     * @param _listCount The count of records returned in the list.
                     * 
                     */
                    void SetListCount(const uint64_t& _listCount);

                    /**
                     * 判断参数 ListCount 是否已赋值
                     * @return ListCount 是否已赋值
                     * 
                     */
                    bool ListCountHasBeenSet() const;

                    /**
                     * 获取The total record count.
                     * @return TotalCount The total record count.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置The total record count.
                     * @param _totalCount The total record count.
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * The subdomain count.
                     */
                    uint64_t m_subdomainCount;
                    bool m_subdomainCountHasBeenSet;

                    /**
                     * The count of records returned in the list.
                     */
                    uint64_t m_listCount;
                    bool m_listCountHasBeenSet;

                    /**
                     * The total record count.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDCOUNTINFO_H_
