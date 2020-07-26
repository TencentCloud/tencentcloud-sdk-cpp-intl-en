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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETEUSUALLOGINPLACESREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETEUSUALLOGINPLACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteUsualLoginPlaces request structure.
                */
                class DeleteUsualLoginPlacesRequest : public AbstractModel
                {
                public:
                    DeleteUsualLoginPlacesRequest();
                    ~DeleteUsualLoginPlacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CWP agent `Uuid`
                     * @return Uuid CWP agent `Uuid`
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `Uuid`
                     * @param Uuid CWP agent `Uuid`
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Added usual login city ID array
                     * @return CityIds Added usual login city ID array
                     */
                    std::vector<uint64_t> GetCityIds() const;

                    /**
                     * 设置Added usual login city ID array
                     * @param CityIds Added usual login city ID array
                     */
                    void SetCityIds(const std::vector<uint64_t>& _cityIds);

                    /**
                     * 判断参数 CityIds 是否已赋值
                     * @return CityIds 是否已赋值
                     */
                    bool CityIdsHasBeenSet() const;

                private:

                    /**
                     * CWP agent `Uuid`
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Added usual login city ID array
                     */
                    std::vector<uint64_t> m_cityIds;
                    bool m_cityIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETEUSUALLOGINPLACESREQUEST_H_
