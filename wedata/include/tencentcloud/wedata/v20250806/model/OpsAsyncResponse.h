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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Asynchronous operation return structure.
                */
                class OpsAsyncResponse : public AbstractModel
                {
                public:
                    OpsAsyncResponse();
                    ~OpsAsyncResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asynchronous execution record Id.
                     * @return AsyncId Asynchronous execution record Id.
                     * 
                     */
                    std::string GetAsyncId() const;

                    /**
                     * 设置Asynchronous execution record Id.
                     * @param _asyncId Asynchronous execution record Id.
                     * 
                     */
                    void SetAsyncId(const std::string& _asyncId);

                    /**
                     * 判断参数 AsyncId 是否已赋值
                     * @return AsyncId 是否已赋值
                     * 
                     */
                    bool AsyncIdHasBeenSet() const;

                private:

                    /**
                     * Asynchronous execution record Id.
                     */
                    std::string m_asyncId;
                    bool m_asyncIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCRESPONSE_H_
