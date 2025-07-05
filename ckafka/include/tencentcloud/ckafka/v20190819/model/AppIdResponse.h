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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_APPIDRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_APPIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * `AppId` query result
                */
                class AppIdResponse : public AbstractModel
                {
                public:
                    AppIdResponse();
                    ~AppIdResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of eligible `AppId`
                     * @return TotalCount Number of eligible `AppId`
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of eligible `AppId`
                     * @param _totalCount Number of eligible `AppId`
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of eligible `AppId`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppIdList List of eligible `AppId`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAppIdList() const;

                    /**
                     * 设置List of eligible `AppId`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _appIdList List of eligible `AppId`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppIdList(const std::vector<int64_t>& _appIdList);

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                private:

                    /**
                     * Number of eligible `AppId`
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of eligible `AppId`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_appIdList;
                    bool m_appIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_APPIDRESPONSE_H_
