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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATECUSTOMIZEDCONFIGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATECUSTOMIZEDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BindItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * AssociateCustomizedConfig request structure.
                */
                class AssociateCustomizedConfigRequest : public AbstractModel
                {
                public:
                    AssociateCustomizedConfigRequest();
                    ~AssociateCustomizedConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration ID.
                     * @return UconfigId Configuration ID.
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置Configuration ID.
                     * @param _uconfigId Configuration ID.
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取Associated server or location
                     * @return BindList Associated server or location
                     * 
                     */
                    std::vector<BindItem> GetBindList() const;

                    /**
                     * 设置Associated server or location
                     * @param _bindList Associated server or location
                     * 
                     */
                    void SetBindList(const std::vector<BindItem>& _bindList);

                    /**
                     * 判断参数 BindList 是否已赋值
                     * @return BindList 是否已赋值
                     * 
                     */
                    bool BindListHasBeenSet() const;

                private:

                    /**
                     * Configuration ID.
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * Associated server or location
                     */
                    std::vector<BindItem> m_bindList;
                    bool m_bindListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATECUSTOMIZEDCONFIGREQUEST_H_
