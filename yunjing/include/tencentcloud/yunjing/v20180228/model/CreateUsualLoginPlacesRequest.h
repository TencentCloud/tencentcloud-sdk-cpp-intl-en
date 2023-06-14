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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_CREATEUSUALLOGINPLACESREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_CREATEUSUALLOGINPLACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/Place.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateUsualLoginPlaces request structure.
                */
                class CreateUsualLoginPlacesRequest : public AbstractModel
                {
                public:
                    CreateUsualLoginPlacesRequest();
                    ~CreateUsualLoginPlacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CWP agent `UUID` array.
                     * @return Uuids CWP agent `UUID` array.
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置CWP agent `UUID` array.
                     * @param _uuids CWP agent `UUID` array.
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取Login region information array.
                     * @return Places Login region information array.
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置Login region information array.
                     * @param _places Login region information array.
                     * 
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                private:

                    /**
                     * CWP agent `UUID` array.
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * Login region information array.
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_CREATEUSUALLOGINPLACESREQUEST_H_
