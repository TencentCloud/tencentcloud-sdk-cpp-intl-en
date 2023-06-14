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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSwitchLists request structure.
                */
                class DescribeSwitchListsRequest : public AbstractModel
                {
                public:
                    DescribeSwitchListsRequest();
                    ~DescribeSwitchListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Firewall status. 0: disabled; 1: enabled
                     * @return Status Firewall status. 0: disabled; 1: enabled
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Firewall status. 0: disabled; 1: enabled
                     * @param _status Firewall status. 0: disabled; 1: enabled
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
                     * 获取Asset type, e.g. CVM/NAT/VPN/CLB/others
                     * @return Type Asset type, e.g. CVM/NAT/VPN/CLB/others
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Asset type, e.g. CVM/NAT/VPN/CLB/others
                     * @param _type Asset type, e.g. CVM/NAT/VPN/CLB/others
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Region, e.g. Shanghai, Chongqing, Guangzhou, etc.
                     * @return Area Region, e.g. Shanghai, Chongqing, Guangzhou, etc.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region, e.g. Shanghai, Chongqing, Guangzhou, etc.
                     * @param _area Region, e.g. Shanghai, Chongqing, Guangzhou, etc.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Search value, e.g. "{"common":"106.54.189.45"}"
                     * @return SearchValue Search value, e.g. "{"common":"106.54.189.45"}"
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Search value, e.g. "{"common":"106.54.189.45"}"
                     * @param _searchValue Search value, e.g. "{"common":"106.54.189.45"}"
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取Number of entries. Default: 10
                     * @return Limit Number of entries. Default: 10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries. Default: 10
                     * @param _limit Number of entries. Default: 10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default: 0
                     * @return Offset Offset. Default: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default: 0
                     * @param _offset Offset. Default: 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sort order. desc: descending; asc: ascending
                     * @return Order Sort order. desc: descending; asc: ascending
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order. desc: descending; asc: ascending
                     * @param _order Sort order. desc: descending; asc: ascending
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field. PortTimes (number of risky ports)
                     * @return By Sorting field. PortTimes (number of risky ports)
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field. PortTimes (number of risky ports)
                     * @param _by Sorting field. PortTimes (number of risky ports)
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Firewall status. 0: disabled; 1: enabled
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Asset type, e.g. CVM/NAT/VPN/CLB/others
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Region, e.g. Shanghai, Chongqing, Guangzhou, etc.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Search value, e.g. "{"common":"106.54.189.45"}"
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * Number of entries. Default: 10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort order. desc: descending; asc: ascending
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field. PortTimes (number of risky ports)
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSREQUEST_H_
