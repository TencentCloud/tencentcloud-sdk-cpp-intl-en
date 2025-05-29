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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTQALISTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTQALISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QAQuery.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ExportQAList request structure.
                */
                class ExportQAListRequest : public AbstractModel
                {
                public:
                    ExportQAListRequest();
                    ~ExportQAListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Q&A business ID.
                     * @return QaBizIds Q&A business ID.
                     * 
                     */
                    std::vector<std::string> GetQaBizIds() const;

                    /**
                     * 设置Q&A business ID.
                     * @param _qaBizIds Q&A business ID.
                     * 
                     */
                    void SetQaBizIds(const std::vector<std::string>& _qaBizIds);

                    /**
                     * 判断参数 QaBizIds 是否已赋值
                     * @return QaBizIds 是否已赋值
                     * 
                     */
                    bool QaBizIdsHasBeenSet() const;

                    /**
                     * 获取Query parameter.
                     * @return Filters Query parameter.
                     * 
                     */
                    QAQuery GetFilters() const;

                    /**
                     * 设置Query parameter.
                     * @param _filters Query parameter.
                     * 
                     */
                    void SetFilters(const QAQuery& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Q&A business ID.
                     */
                    std::vector<std::string> m_qaBizIds;
                    bool m_qaBizIdsHasBeenSet;

                    /**
                     * Query parameter.
                     */
                    QAQuery m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTQALISTREQUEST_H_
