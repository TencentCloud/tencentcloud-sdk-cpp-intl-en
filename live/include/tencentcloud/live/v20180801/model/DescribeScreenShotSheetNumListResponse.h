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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TimeValue.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeScreenShotSheetNumList response structure.
                */
                class DescribeScreenShotSheetNumListResponse : public AbstractModel
                {
                public:
                    DescribeScreenShotSheetNumListResponse();
                    ~DescribeScreenShotSheetNumListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Data information list.
                     * @return DataInfoList Data information list.
                     * 
                     */
                    std::vector<TimeValue> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * Data information list.
                     */
                    std::vector<TimeValue> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTRESPONSE_H_
