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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/TemplateGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeConditionsTemplateList response structure.
                */
                class DescribeConditionsTemplateListResponse : public AbstractModel
                {
                public:
                    DescribeConditionsTemplateListResponse();
                    ~DescribeConditionsTemplateListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of templates.
                     * @return Total Total number of templates.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Template list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TemplateGroupList Template list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TemplateGroup> GetTemplateGroupList() const;

                    /**
                     * 判断参数 TemplateGroupList 是否已赋值
                     * @return TemplateGroupList 是否已赋值
                     * 
                     */
                    bool TemplateGroupListHasBeenSet() const;

                private:

                    /**
                     * Total number of templates.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Template list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TemplateGroup> m_templateGroupList;
                    bool m_templateGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTRESPONSE_H_
