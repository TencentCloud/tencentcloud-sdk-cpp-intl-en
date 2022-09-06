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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVENESSRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVENESSRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/FileInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetLivenessResult response structure.
                */
                class GetLivenessResultResponse : public AbstractModel
                {
                public:
                    GetLivenessResultResponse();
                    ~GetLivenessResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The final verification result.
                     * @return Result The final verification result.
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取The description of the final verification result.
                     * @return Description The description of the final verification result.
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The face screenshot.
                     * @return BestFrame The face screenshot.
                     */
                    FileInfo GetBestFrame() const;

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取The video for the detection.
                     * @return Video The video for the detection.
                     */
                    FileInfo GetVideo() const;

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     */
                    bool VideoHasBeenSet() const;

                private:

                    /**
                     * The final verification result.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * The description of the final verification result.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The face screenshot.
                     */
                    FileInfo m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * The video for the detection.
                     */
                    FileInfo m_video;
                    bool m_videoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVENESSRESULTRESPONSE_H_
