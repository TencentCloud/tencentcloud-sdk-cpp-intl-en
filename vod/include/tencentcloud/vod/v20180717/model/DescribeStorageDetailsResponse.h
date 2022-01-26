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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/StatDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeStorageDetails response structure.
                */
                class DescribeStorageDetailsResponse : public AbstractModel
                {
                public:
                    DescribeStorageDetailsResponse();
                    ~DescribeStorageDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Storage statistics with one piece of data for every 5 minutes or 1 day.
                     * @return Data Storage statistics with one piece of data for every 5 minutes or 1 day.
                     */
                    std::vector<StatDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Storage statistics with one piece of data for every 5 minutes or 1 day.
                     */
                    std::vector<StatDataItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSRESPONSE_H_
