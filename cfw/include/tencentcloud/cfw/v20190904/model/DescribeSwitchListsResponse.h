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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SwitchListsData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSwitchLists response structure.
                */
                class DescribeSwitchListsResponse : public AbstractModel
                {
                public:
                    DescribeSwitchListsResponse();
                    ~DescribeSwitchListsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total entries
                     * @return Total Total entries
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取List data
                     * @return Data List data
                     * 
                     */
                    std::vector<SwitchListsData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Region list
                     * @return AreaLists Region list
                     * 
                     */
                    std::vector<std::string> GetAreaLists() const;

                    /**
                     * 判断参数 AreaLists 是否已赋值
                     * @return AreaLists 是否已赋值
                     * 
                     */
                    bool AreaListsHasBeenSet() const;

                    /**
                     * 获取Number of enabled firewalls
Note: This field may return `null`, indicating that no valid value was found.
                     * @return OnNum Number of enabled firewalls
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetOnNum() const;

                    /**
                     * 判断参数 OnNum 是否已赋值
                     * @return OnNum 是否已赋值
                     * 
                     */
                    bool OnNumHasBeenSet() const;

                    /**
                     * 获取Number of disabled firewalls
Note: This field may return `null`, indicating that no valid value was found.
                     * @return OffNum Number of disabled firewalls
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetOffNum() const;

                    /**
                     * 判断参数 OffNum 是否已赋值
                     * @return OffNum 是否已赋值
                     * 
                     */
                    bool OffNumHasBeenSet() const;

                private:

                    /**
                     * Total entries
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * List data
                     */
                    std::vector<SwitchListsData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Region list
                     */
                    std::vector<std::string> m_areaLists;
                    bool m_areaListsHasBeenSet;

                    /**
                     * Number of enabled firewalls
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_onNum;
                    bool m_onNumHasBeenSet;

                    /**
                     * Number of disabled firewalls
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_offNum;
                    bool m_offNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHLISTSRESPONSE_H_
