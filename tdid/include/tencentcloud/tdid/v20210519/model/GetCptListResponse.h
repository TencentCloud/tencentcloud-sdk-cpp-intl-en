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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCPTLISTRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCPTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/CptListData.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetCptList response structure.
                */
                class GetCptListResponse : public AbstractModel
                {
                public:
                    GetCptListResponse();
                    ~GetCptListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The information of claim protocol types (CPT).
                     * @return CptDataList The information of claim protocol types (CPT).
                     * 
                     */
                    std::vector<CptListData> GetCptDataList() const;

                    /**
                     * 判断参数 CptDataList 是否已赋值
                     * @return CptDataList 是否已赋值
                     * 
                     */
                    bool CptDataListHasBeenSet() const;

                    /**
                     * 获取The total number of claim protocol types (CPT).
                     * @return AllCount The total number of claim protocol types (CPT).
                     * 
                     */
                    uint64_t GetAllCount() const;

                    /**
                     * 判断参数 AllCount 是否已赋值
                     * @return AllCount 是否已赋值
                     * 
                     */
                    bool AllCountHasBeenSet() const;

                private:

                    /**
                     * The information of claim protocol types (CPT).
                     */
                    std::vector<CptListData> m_cptDataList;
                    bool m_cptDataListHasBeenSet;

                    /**
                     * The total number of claim protocol types (CPT).
                     */
                    uint64_t m_allCount;
                    bool m_allCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCPTLISTRESPONSE_H_
