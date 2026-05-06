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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSAGEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeUsageData request structure.
                */
                class DescribeUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeUsageDataRequest();
                    ~DescribeUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Start date. Use ISO date format.</p>
                     * @return StartTime <p>Start date. Use ISO date format.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start date. Use ISO date format.</p>
                     * @param _startTime <p>Start date. Use ISO date format.</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p><p>Parameter format: 2019-07-16T06:21:28Z.</p>
                     * @return EndTime <p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p><p>Parameter format: 2019-07-16T06:21:28Z.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p><p>Parameter format: 2019-07-16T06:21:28Z.</p>
                     * @param _endTime <p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p><p>Parameter format: 2019-07-16T06:21:28Z.</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Media processing task type to query. Default value: Transcode. Valid values: </p><li>Transcode: Transcoding, </li><li>Enhance: Enhancement, </li><li>AIAnalysis: AI Analysis, </li><li>AIRecognition: AI Recognition, </li><li>AIReview: AI Review, </li><li>Snapshot: Snapshot, </li><li>AnimatedGraphics: Animated Graphics, </li><li>AiQualityControl: Quality Control, </li><li>Evaluation: Video Evaluation, </li><li>ImageProcess: Image Processing, </li><li>AddBlindWatermark: Add Basic Copyright Digital Watermark, </li><li>AddNagraWatermark: Add NAGRA Digital Watermark, </li><li>ExtractBlindWatermark: Extract Basic Copyright Digital Watermark, </li><li>AIGCVideo: AIGC Video Generation, </li><li>AIGCImage: AIGC Image Generation.</li>
                     * @return Types <p>Media processing task type to query. Default value: Transcode. Valid values: </p><li>Transcode: Transcoding, </li><li>Enhance: Enhancement, </li><li>AIAnalysis: AI Analysis, </li><li>AIRecognition: AI Recognition, </li><li>AIReview: AI Review, </li><li>Snapshot: Snapshot, </li><li>AnimatedGraphics: Animated Graphics, </li><li>AiQualityControl: Quality Control, </li><li>Evaluation: Video Evaluation, </li><li>ImageProcess: Image Processing, </li><li>AddBlindWatermark: Add Basic Copyright Digital Watermark, </li><li>AddNagraWatermark: Add NAGRA Digital Watermark, </li><li>ExtractBlindWatermark: Extract Basic Copyright Digital Watermark, </li><li>AIGCVideo: AIGC Video Generation, </li><li>AIGCImage: AIGC Image Generation.</li>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置<p>Media processing task type to query. Default value: Transcode. Valid values: </p><li>Transcode: Transcoding, </li><li>Enhance: Enhancement, </li><li>AIAnalysis: AI Analysis, </li><li>AIRecognition: AI Recognition, </li><li>AIReview: AI Review, </li><li>Snapshot: Snapshot, </li><li>AnimatedGraphics: Animated Graphics, </li><li>AiQualityControl: Quality Control, </li><li>Evaluation: Video Evaluation, </li><li>ImageProcess: Image Processing, </li><li>AddBlindWatermark: Add Basic Copyright Digital Watermark, </li><li>AddNagraWatermark: Add NAGRA Digital Watermark, </li><li>ExtractBlindWatermark: Extract Basic Copyright Digital Watermark, </li><li>AIGCVideo: AIGC Video Generation, </li><li>AIGCImage: AIGC Image Generation.</li>
                     * @param _types <p>Media processing task type to query. Default value: Transcode. Valid values: </p><li>Transcode: Transcoding, </li><li>Enhance: Enhancement, </li><li>AIAnalysis: AI Analysis, </li><li>AIRecognition: AI Recognition, </li><li>AIReview: AI Review, </li><li>Snapshot: Snapshot, </li><li>AnimatedGraphics: Animated Graphics, </li><li>AiQualityControl: Quality Control, </li><li>Evaluation: Video Evaluation, </li><li>ImageProcess: Image Processing, </li><li>AddBlindWatermark: Add Basic Copyright Digital Watermark, </li><li>AddNagraWatermark: Add NAGRA Digital Watermark, </li><li>ExtractBlindWatermark: Extract Basic Copyright Digital Watermark, </li><li>AIGCVideo: AIGC Video Generation, </li><li>AIGCImage: AIGC Image Generation.</li>
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取<p>Media processing region. Default value: ap-guangzhou. Valid values: </p><li>ap-guangzhou: Guangzhou, </li><li>ap-hongkong: Hong Kong (China), </li><li>ap-taipei: Taiwan (China), </li><li>ap-singapore: Singapore, </li><li>ap-mumbai: India, </li><li>ap-jakarta: Jakarta, </li><li>ap-seoul: Seoul, </li><li>ap-bangkok: Thailand, </li><li>ap-tokyo: Japan, </li><li>na-siliconvalley: Silicon Valley (USA), </li><li>na-ashburn: Virginia, </li><li>na-toronto: Toronto, </li><li>sa-saopaulo: Sao Paulo, </li><li>eu-frankfurt: Frankfurt, </li><li>eu-moscow: Russia, </li><li>aws: AWS.</li>
                     * @return ProcessRegions <p>Media processing region. Default value: ap-guangzhou. Valid values: </p><li>ap-guangzhou: Guangzhou, </li><li>ap-hongkong: Hong Kong (China), </li><li>ap-taipei: Taiwan (China), </li><li>ap-singapore: Singapore, </li><li>ap-mumbai: India, </li><li>ap-jakarta: Jakarta, </li><li>ap-seoul: Seoul, </li><li>ap-bangkok: Thailand, </li><li>ap-tokyo: Japan, </li><li>na-siliconvalley: Silicon Valley (USA), </li><li>na-ashburn: Virginia, </li><li>na-toronto: Toronto, </li><li>sa-saopaulo: Sao Paulo, </li><li>eu-frankfurt: Frankfurt, </li><li>eu-moscow: Russia, </li><li>aws: AWS.</li>
                     * 
                     */
                    std::vector<std::string> GetProcessRegions() const;

                    /**
                     * 设置<p>Media processing region. Default value: ap-guangzhou. Valid values: </p><li>ap-guangzhou: Guangzhou, </li><li>ap-hongkong: Hong Kong (China), </li><li>ap-taipei: Taiwan (China), </li><li>ap-singapore: Singapore, </li><li>ap-mumbai: India, </li><li>ap-jakarta: Jakarta, </li><li>ap-seoul: Seoul, </li><li>ap-bangkok: Thailand, </li><li>ap-tokyo: Japan, </li><li>na-siliconvalley: Silicon Valley (USA), </li><li>na-ashburn: Virginia, </li><li>na-toronto: Toronto, </li><li>sa-saopaulo: Sao Paulo, </li><li>eu-frankfurt: Frankfurt, </li><li>eu-moscow: Russia, </li><li>aws: AWS.</li>
                     * @param _processRegions <p>Media processing region. Default value: ap-guangzhou. Valid values: </p><li>ap-guangzhou: Guangzhou, </li><li>ap-hongkong: Hong Kong (China), </li><li>ap-taipei: Taiwan (China), </li><li>ap-singapore: Singapore, </li><li>ap-mumbai: India, </li><li>ap-jakarta: Jakarta, </li><li>ap-seoul: Seoul, </li><li>ap-bangkok: Thailand, </li><li>ap-tokyo: Japan, </li><li>na-siliconvalley: Silicon Valley (USA), </li><li>na-ashburn: Virginia, </li><li>na-toronto: Toronto, </li><li>sa-saopaulo: Sao Paulo, </li><li>eu-frankfurt: Frankfurt, </li><li>eu-moscow: Russia, </li><li>aws: AWS.</li>
                     * 
                     */
                    void SetProcessRegions(const std::vector<std::string>& _processRegions);

                    /**
                     * 判断参数 ProcessRegions 是否已赋值
                     * @return ProcessRegions 是否已赋值
                     * 
                     */
                    bool ProcessRegionsHasBeenSet() const;

                private:

                    /**
                     * <p>Start date. Use ISO date format.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date format</a>.</p><p>Parameter format: 2019-07-16T06:21:28Z.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Media processing task type to query. Default value: Transcode. Valid values: </p><li>Transcode: Transcoding, </li><li>Enhance: Enhancement, </li><li>AIAnalysis: AI Analysis, </li><li>AIRecognition: AI Recognition, </li><li>AIReview: AI Review, </li><li>Snapshot: Snapshot, </li><li>AnimatedGraphics: Animated Graphics, </li><li>AiQualityControl: Quality Control, </li><li>Evaluation: Video Evaluation, </li><li>ImageProcess: Image Processing, </li><li>AddBlindWatermark: Add Basic Copyright Digital Watermark, </li><li>AddNagraWatermark: Add NAGRA Digital Watermark, </li><li>ExtractBlindWatermark: Extract Basic Copyright Digital Watermark, </li><li>AIGCVideo: AIGC Video Generation, </li><li>AIGCImage: AIGC Image Generation.</li>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * <p>Media processing region. Default value: ap-guangzhou. Valid values: </p><li>ap-guangzhou: Guangzhou, </li><li>ap-hongkong: Hong Kong (China), </li><li>ap-taipei: Taiwan (China), </li><li>ap-singapore: Singapore, </li><li>ap-mumbai: India, </li><li>ap-jakarta: Jakarta, </li><li>ap-seoul: Seoul, </li><li>ap-bangkok: Thailand, </li><li>ap-tokyo: Japan, </li><li>na-siliconvalley: Silicon Valley (USA), </li><li>na-ashburn: Virginia, </li><li>na-toronto: Toronto, </li><li>sa-saopaulo: Sao Paulo, </li><li>eu-frankfurt: Frankfurt, </li><li>eu-moscow: Russia, </li><li>aws: AWS.</li>
                     */
                    std::vector<std::string> m_processRegions;
                    bool m_processRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSAGEDATAREQUEST_H_
