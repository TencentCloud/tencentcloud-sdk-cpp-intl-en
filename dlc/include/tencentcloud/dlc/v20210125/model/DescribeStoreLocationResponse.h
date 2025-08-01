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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTORELOCATIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTORELOCATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeStoreLocation response structure.
                */
                class DescribeStoreLocationResponse : public AbstractModel
                {
                public:
                    DescribeStoreLocationResponse();
                    ~DescribeStoreLocationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Return the path of the location where results are stored and which was set by the user. If it is not set, the null character string, i.e. "", will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoreLocation Return the path of the location where results are stored and which was set by the user. If it is not set, the null character string, i.e. "", will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStoreLocation() const;

                    /**
                     * 判断参数 StoreLocation 是否已赋值
                     * @return StoreLocation 是否已赋值
                     * 
                     */
                    bool StoreLocationHasBeenSet() const;

                private:

                    /**
                     * Return the path of the location where results are stored and which was set by the user. If it is not set, the null character string, i.e. "", will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storeLocation;
                    bool m_storeLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTORELOCATIONRESPONSE_H_
