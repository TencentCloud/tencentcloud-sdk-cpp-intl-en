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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSINVOKEDETAILINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSINVOKEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos call detailed information
                */
                class CosInvokeDetailInfo : public AbstractModel
                {
                public:
                    CosInvokeDetailInfo();
                    ~CosInvokeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Call time.
                     * @return InvokeTimestamp Call time.
                     * 
                     */
                    int64_t GetInvokeTimestamp() const;

                    /**
                     * 设置Call time.
                     * @param _invokeTimestamp Call time.
                     * 
                     */
                    void SetInvokeTimestamp(const int64_t& _invokeTimestamp);

                    /**
                     * 判断参数 InvokeTimestamp 是否已赋值
                     * @return InvokeTimestamp 是否已赋值
                     * 
                     */
                    bool InvokeTimestampHasBeenSet() const;

                    /**
                     * 获取Request ID
                     * @return InvokeRequestId Request ID
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置Request ID
                     * @param _invokeRequestId Request ID
                     * 
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     * 
                     */
                    bool InvokeRequestIdHasBeenSet() const;

                    /**
                     * 获取Call content
                     * @return InvokeContent Call content
                     * 
                     */
                    std::string GetInvokeContent() const;

                    /**
                     * 设置Call content
                     * @param _invokeContent Call content
                     * 
                     */
                    void SetInvokeContent(const std::string& _invokeContent);

                    /**
                     * 判断参数 InvokeContent 是否已赋值
                     * @return InvokeContent 是否已赋值
                     * 
                     */
                    bool InvokeContentHasBeenSet() const;

                private:

                    /**
                     * Call time.
                     */
                    int64_t m_invokeTimestamp;
                    bool m_invokeTimestampHasBeenSet;

                    /**
                     * Request ID
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                    /**
                     * Call content
                     */
                    std::string m_invokeContent;
                    bool m_invokeContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSINVOKEDETAILINFO_H_
