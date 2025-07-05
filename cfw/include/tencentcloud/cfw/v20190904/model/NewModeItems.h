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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NEWMODEITEMS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NEWMODEITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Parameters passed for the Create New mode
                */
                class NewModeItems : public AbstractModel
                {
                public:
                    NewModeItems();
                    ~NewModeItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC list for the Create New mode
                     * @return VpcList VPC list for the Create New mode
                     * 
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置VPC list for the Create New mode
                     * @param _vpcList VPC list for the Create New mode
                     * 
                     */
                    void SetVpcList(const std::vector<std::string>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取The list of egress public EIPs bound for the Create New mode. Either Eips or AddCount is required.
                     * @return Eips The list of egress public EIPs bound for the Create New mode. Either Eips or AddCount is required.
                     * 
                     */
                    std::vector<std::string> GetEips() const;

                    /**
                     * 设置The list of egress public EIPs bound for the Create New mode. Either Eips or AddCount is required.
                     * @param _eips The list of egress public EIPs bound for the Create New mode. Either Eips or AddCount is required.
                     * 
                     */
                    void SetEips(const std::vector<std::string>& _eips);

                    /**
                     * 判断参数 Eips 是否已赋值
                     * @return Eips 是否已赋值
                     * 
                     */
                    bool EipsHasBeenSet() const;

                    /**
                     * 获取The number of egress public EIPs newly bound for the Create New mode. Either Eips or AddCount is required.
                     * @return AddCount The number of egress public EIPs newly bound for the Create New mode. Either Eips or AddCount is required.
                     * 
                     */
                    int64_t GetAddCount() const;

                    /**
                     * 设置The number of egress public EIPs newly bound for the Create New mode. Either Eips or AddCount is required.
                     * @param _addCount The number of egress public EIPs newly bound for the Create New mode. Either Eips or AddCount is required.
                     * 
                     */
                    void SetAddCount(const int64_t& _addCount);

                    /**
                     * 判断参数 AddCount 是否已赋值
                     * @return AddCount 是否已赋值
                     * 
                     */
                    bool AddCountHasBeenSet() const;

                private:

                    /**
                     * VPC list for the Create New mode
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * The list of egress public EIPs bound for the Create New mode. Either Eips or AddCount is required.
                     */
                    std::vector<std::string> m_eips;
                    bool m_eipsHasBeenSet;

                    /**
                     * The number of egress public EIPs newly bound for the Create New mode. Either Eips or AddCount is required.
                     */
                    int64_t m_addCount;
                    bool m_addCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NEWMODEITEMS_H_
