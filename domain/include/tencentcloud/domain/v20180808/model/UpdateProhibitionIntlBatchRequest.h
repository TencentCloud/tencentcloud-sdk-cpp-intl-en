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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPDATEPROHIBITIONINTLBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPDATEPROHIBITIONINTLBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UpdateProhibitionIntlBatch request structure.
                */
                class UpdateProhibitionIntlBatchRequest : public AbstractModel
                {
                public:
                    UpdateProhibitionIntlBatchRequest();
                    ~UpdateProhibitionIntlBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain array.
                     * @return Domains The domain array.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The domain array.
                     * @param _domains The domain array.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Whether to enable update prohibition. Valid values: `true` (enable), `false` (disable).
                     * @return Status Whether to enable update prohibition. Valid values: `true` (enable), `false` (disable).
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether to enable update prohibition. Valid values: `true` (enable), `false` (disable).
                     * @param _status Whether to enable update prohibition. Valid values: `true` (enable), `false` (disable).
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The domain array.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Whether to enable update prohibition. Valid values: `true` (enable), `false` (disable).
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPDATEPROHIBITIONINTLBATCHREQUEST_H_
