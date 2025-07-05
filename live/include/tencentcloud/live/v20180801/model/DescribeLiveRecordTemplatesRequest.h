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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveRecordTemplates request structure.
                */
                class DescribeLiveRecordTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeLiveRecordTemplatesRequest();
                    ~DescribeLiveRecordTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is an LCB template. Default value: 0.
0: LVB.
1: LCB.
                     * @return IsDelayLive Whether it is an LCB template. Default value: 0.
0: LVB.
1: LCB.
                     * 
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置Whether it is an LCB template. Default value: 0.
0: LVB.
1: LCB.
                     * @param _isDelayLive Whether it is an LCB template. Default value: 0.
0: LVB.
1: LCB.
                     * 
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     * 
                     */
                    bool IsDelayLiveHasBeenSet() const;

                private:

                    /**
                     * Whether it is an LCB template. Default value: 0.
0: LVB.
1: LCB.
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
