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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_DOCUMENTUSAGE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_DOCUMENTUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * The usage of document splitting task.
                */
                class DocumentUsage : public AbstractModel
                {
                public:
                    DocumentUsage();
                    ~DocumentUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Page number of the document splitting task.
                     * @return PageNumber Page number of the document splitting task.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number of the document splitting task.
                     * @param _pageNumber Page number of the document splitting task.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Total number of tokens consumed by the document splitting task.
                     * @return TotalToken Total number of tokens consumed by the document splitting task.
                     * @deprecated
                     */
                    int64_t GetTotalToken() const;

                    /**
                     * 设置Total number of tokens consumed by the document splitting task.
                     * @param _totalToken Total number of tokens consumed by the document splitting task.
                     * @deprecated
                     */
                    void SetTotalToken(const int64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * @deprecated
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取Total number of tokens consumed by the document splitting task.
                     * @return TotalTokens Total number of tokens consumed by the document splitting task.
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置Total number of tokens consumed by the document splitting task.
                     * @param _totalTokens Total number of tokens consumed by the document splitting task.
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * Page number of the document splitting task.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Total number of tokens consumed by the document splitting task.
                     */
                    int64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * Total number of tokens consumed by the document splitting task.
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_DOCUMENTUSAGE_H_
