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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYTASKCOSTDETAILRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYTASKCOSTDETAILRESPONSE_H_

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
                * QueryTaskCostDetail response structure.
                */
                class QueryTaskCostDetailResponse : public AbstractModel
                {
                public:
                    QueryTaskCostDetailResponse();
                    ~QueryTaskCostDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Identifier on the next page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SearchAfter Identifier on the next page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSearchAfter() const;

                    /**
                     * 判断参数 SearchAfter 是否已赋值
                     * @return SearchAfter 是否已赋值
                     * 
                     */
                    bool SearchAfterHasBeenSet() const;

                    /**
                     * 获取Returned data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Returned data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Identifier on the next page
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_searchAfter;
                    bool m_searchAfterHasBeenSet;

                    /**
                     * Returned data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYTASKCOSTDETAILRESPONSE_H_
