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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRAINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/RetrievalLivenessExtraInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 
                */
                class ExtraInfo : public AbstractModel
                {
                public:
                    ExtraInfo();
                    ~ExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RetrievalLivenessExtraInfo 
                     * 
                     */
                    std::vector<RetrievalLivenessExtraInfo> GetRetrievalLivenessExtraInfo() const;

                    /**
                     * 设置
                     * @param _retrievalLivenessExtraInfo 
                     * 
                     */
                    void SetRetrievalLivenessExtraInfo(const std::vector<RetrievalLivenessExtraInfo>& _retrievalLivenessExtraInfo);

                    /**
                     * 判断参数 RetrievalLivenessExtraInfo 是否已赋值
                     * @return RetrievalLivenessExtraInfo 是否已赋值
                     * 
                     */
                    bool RetrievalLivenessExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<RetrievalLivenessExtraInfo> m_retrievalLivenessExtraInfo;
                    bool m_retrievalLivenessExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRAINFO_H_
