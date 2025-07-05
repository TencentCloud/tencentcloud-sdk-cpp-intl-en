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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDLISTRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/DidData.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetDidList response structure.
                */
                class GetDidListResponse : public AbstractModel
                {
                public:
                    GetDidListResponse();
                    ~GetDidListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取A list of DIDs.
                     * @return DataList A list of DIDs.
                     * 
                     */
                    std::vector<DidData> GetDataList() const;

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取The total number of records.
                     * @return AllCount The total number of records.
                     * 
                     */
                    int64_t GetAllCount() const;

                    /**
                     * 判断参数 AllCount 是否已赋值
                     * @return AllCount 是否已赋值
                     * 
                     */
                    bool AllCountHasBeenSet() const;

                private:

                    /**
                     * A list of DIDs.
                     */
                    std::vector<DidData> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * The total number of records.
                     */
                    int64_t m_allCount;
                    bool m_allCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDLISTRESPONSE_H_
