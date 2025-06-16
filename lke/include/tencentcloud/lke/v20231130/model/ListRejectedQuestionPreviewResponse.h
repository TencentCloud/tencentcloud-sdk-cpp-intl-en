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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONPREVIEWRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONPREVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ReleaseRejectedQuestion.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListRejectedQuestionPreview response structure.
                */
                class ListRejectedQuestionPreviewResponse : public AbstractModel
                {
                public:
                    ListRejectedQuestionPreviewResponse();
                    ~ListRejectedQuestionPreviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity of documents.
                     * @return Total Quantity of documents.
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取List of documents.
                     * @return List List of documents.
                     * 
                     */
                    std::vector<ReleaseRejectedQuestion> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Quantity of documents.
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * List of documents.
                     */
                    std::vector<ReleaseRejectedQuestion> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONPREVIEWRESPONSE_H_
