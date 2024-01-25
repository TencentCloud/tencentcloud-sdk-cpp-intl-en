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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMESCALEDATARESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMESCALEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TRTCDataResult.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeTRTCRealTimeScaleData response structure.
                */
                class DescribeTRTCRealTimeScaleDataResponse : public AbstractModel
                {
                public:
                    DescribeTRTCRealTimeScaleDataResponse();
                    ~DescribeTRTCRealTimeScaleDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC Real- Time Monitoring
 output parameter
                     * @return Data TRTC Real- Time Monitoring
 output parameter
                     * 
                     */
                    TRTCDataResult GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * TRTC Real- Time Monitoring
 output parameter
                     */
                    TRTCDataResult m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMESCALEDATARESPONSE_H_
