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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetRecentMachineInfo request structure.
                */
                class DescribeAssetRecentMachineInfoRequest : public AbstractModel
                {
                public:
                    DescribeAssetRecentMachineInfoRequest();
                    ~DescribeAssetRecentMachineInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time. For example, 2020-09-22.
                     * @return BeginDate Start time. For example, 2020-09-22.
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置Start time. For example, 2020-09-22.
                     * @param _beginDate Start time. For example, 2020-09-22.
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取End time. For example, 2020-09-22.
                     * @return EndDate End time. For example, 2020-09-22.
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End time. For example, 2020-09-22.
                     * @param _endDate End time. For example, 2020-09-22.
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * Start time. For example, 2020-09-22.
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * End time. For example, 2020-09-22.
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFOREQUEST_H_
