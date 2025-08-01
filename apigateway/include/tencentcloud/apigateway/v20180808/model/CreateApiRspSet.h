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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSPSET_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSPSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiRsp.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Information of the APIs created
                */
                class CreateApiRspSet : public AbstractModel
                {
                public:
                    CreateApiRspSet();
                    ~CreateApiRspSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of APIs
                     * @return TotalCount Total number of APIs
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of APIs
                     * @param _totalCount Total number of APIs
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Information of created APIs
                     * @return ApiSet Information of created APIs
                     * 
                     */
                    std::vector<CreateApiRsp> GetApiSet() const;

                    /**
                     * 设置Information of created APIs
                     * @param _apiSet Information of created APIs
                     * 
                     */
                    void SetApiSet(const std::vector<CreateApiRsp>& _apiSet);

                    /**
                     * 判断参数 ApiSet 是否已赋值
                     * @return ApiSet 是否已赋值
                     * 
                     */
                    bool ApiSetHasBeenSet() const;

                private:

                    /**
                     * Total number of APIs
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Information of created APIs
                     */
                    std::vector<CreateApiRsp> m_apiSet;
                    bool m_apiSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSPSET_H_
