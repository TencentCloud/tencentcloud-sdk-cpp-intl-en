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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PornImageResult.h>
#include <tencentcloud/vod/v20180717/model/TerrorismImageResult.h>
#include <tencentcloud/vod/v20180717/model/PoliticalImageResult.h>
#include <tencentcloud/vod/v20180717/model/ContentReviewOcrResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class ContentReviewResult : public AbstractModel
                {
                public:
                    ContentReviewResult();
                    ~ContentReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return PornImageResult 
                     * 
                     */
                    PornImageResult GetPornImageResult() const;

                    /**
                     * 设置
                     * @param _pornImageResult 
                     * 
                     */
                    void SetPornImageResult(const PornImageResult& _pornImageResult);

                    /**
                     * 判断参数 PornImageResult 是否已赋值
                     * @return PornImageResult 是否已赋值
                     * 
                     */
                    bool PornImageResultHasBeenSet() const;

                    /**
                     * 获取
                     * @return TerrorismImageResult 
                     * 
                     */
                    TerrorismImageResult GetTerrorismImageResult() const;

                    /**
                     * 设置
                     * @param _terrorismImageResult 
                     * 
                     */
                    void SetTerrorismImageResult(const TerrorismImageResult& _terrorismImageResult);

                    /**
                     * 判断参数 TerrorismImageResult 是否已赋值
                     * @return TerrorismImageResult 是否已赋值
                     * 
                     */
                    bool TerrorismImageResultHasBeenSet() const;

                    /**
                     * 获取
                     * @return PoliticalImageResult 
                     * 
                     */
                    PoliticalImageResult GetPoliticalImageResult() const;

                    /**
                     * 设置
                     * @param _politicalImageResult 
                     * 
                     */
                    void SetPoliticalImageResult(const PoliticalImageResult& _politicalImageResult);

                    /**
                     * 判断参数 PoliticalImageResult 是否已赋值
                     * @return PoliticalImageResult 是否已赋值
                     * 
                     */
                    bool PoliticalImageResultHasBeenSet() const;

                    /**
                     * 获取
                     * @return PornOcrResult 
                     * 
                     */
                    ContentReviewOcrResult GetPornOcrResult() const;

                    /**
                     * 设置
                     * @param _pornOcrResult 
                     * 
                     */
                    void SetPornOcrResult(const ContentReviewOcrResult& _pornOcrResult);

                    /**
                     * 判断参数 PornOcrResult 是否已赋值
                     * @return PornOcrResult 是否已赋值
                     * 
                     */
                    bool PornOcrResultHasBeenSet() const;

                    /**
                     * 获取
                     * @return TerrorismOcrResult 
                     * 
                     */
                    ContentReviewOcrResult GetTerrorismOcrResult() const;

                    /**
                     * 设置
                     * @param _terrorismOcrResult 
                     * 
                     */
                    void SetTerrorismOcrResult(const ContentReviewOcrResult& _terrorismOcrResult);

                    /**
                     * 判断参数 TerrorismOcrResult 是否已赋值
                     * @return TerrorismOcrResult 是否已赋值
                     * 
                     */
                    bool TerrorismOcrResultHasBeenSet() const;

                    /**
                     * 获取
                     * @return PoliticalOcrResult 
                     * 
                     */
                    ContentReviewOcrResult GetPoliticalOcrResult() const;

                    /**
                     * 设置
                     * @param _politicalOcrResult 
                     * 
                     */
                    void SetPoliticalOcrResult(const ContentReviewOcrResult& _politicalOcrResult);

                    /**
                     * 判断参数 PoliticalOcrResult 是否已赋值
                     * @return PoliticalOcrResult 是否已赋值
                     * 
                     */
                    bool PoliticalOcrResultHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    PornImageResult m_pornImageResult;
                    bool m_pornImageResultHasBeenSet;

                    /**
                     * 
                     */
                    TerrorismImageResult m_terrorismImageResult;
                    bool m_terrorismImageResultHasBeenSet;

                    /**
                     * 
                     */
                    PoliticalImageResult m_politicalImageResult;
                    bool m_politicalImageResultHasBeenSet;

                    /**
                     * 
                     */
                    ContentReviewOcrResult m_pornOcrResult;
                    bool m_pornOcrResultHasBeenSet;

                    /**
                     * 
                     */
                    ContentReviewOcrResult m_terrorismOcrResult;
                    bool m_terrorismOcrResultHasBeenSet;

                    /**
                     * 
                     */
                    ContentReviewOcrResult m_politicalOcrResult;
                    bool m_politicalOcrResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_
