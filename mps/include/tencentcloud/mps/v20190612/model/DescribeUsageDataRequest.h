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
                     * 获取Start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return StartTime Start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _startTime Start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
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
                     * 获取End date, which should be greater than or equal to the start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return EndTime End date, which should be greater than or equal to the start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date, which should be greater than or equal to the start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _endTime End date, which should be greater than or equal to the start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
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
                     * 获取Queries the MPS task type. The transcoding task is queried by default.
<li>Transcode: transcoding.</li>
<li>Enhance: enhancement.</li>
<li>AIAnalysis: intelligent analysis.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIReview: content moderation.</li>
<li>Snapshot: screenshot.</li>
<li>AnimatedGraphics: conversion to GIF.</li>
<li>AiQualityControl: media quality inspection.</li>
<li>Evaluation: video assessment.</li>
<li>ImageProcess: image processing.</li>
<li>AddBlindWatermark: add a basic copyright digital watermark.</li>
<li>AddNagraWatermark: add a NAGRA digital watermark.</li>
<li>ExtractBlindWatermark: extract a basic copyright digital watermark.</li>
                     * @return Types Queries the MPS task type. The transcoding task is queried by default.
<li>Transcode: transcoding.</li>
<li>Enhance: enhancement.</li>
<li>AIAnalysis: intelligent analysis.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIReview: content moderation.</li>
<li>Snapshot: screenshot.</li>
<li>AnimatedGraphics: conversion to GIF.</li>
<li>AiQualityControl: media quality inspection.</li>
<li>Evaluation: video assessment.</li>
<li>ImageProcess: image processing.</li>
<li>AddBlindWatermark: add a basic copyright digital watermark.</li>
<li>AddNagraWatermark: add a NAGRA digital watermark.</li>
<li>ExtractBlindWatermark: extract a basic copyright digital watermark.</li>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置Queries the MPS task type. The transcoding task is queried by default.
<li>Transcode: transcoding.</li>
<li>Enhance: enhancement.</li>
<li>AIAnalysis: intelligent analysis.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIReview: content moderation.</li>
<li>Snapshot: screenshot.</li>
<li>AnimatedGraphics: conversion to GIF.</li>
<li>AiQualityControl: media quality inspection.</li>
<li>Evaluation: video assessment.</li>
<li>ImageProcess: image processing.</li>
<li>AddBlindWatermark: add a basic copyright digital watermark.</li>
<li>AddNagraWatermark: add a NAGRA digital watermark.</li>
<li>ExtractBlindWatermark: extract a basic copyright digital watermark.</li>
                     * @param _types Queries the MPS task type. The transcoding task is queried by default.
<li>Transcode: transcoding.</li>
<li>Enhance: enhancement.</li>
<li>AIAnalysis: intelligent analysis.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIReview: content moderation.</li>
<li>Snapshot: screenshot.</li>
<li>AnimatedGraphics: conversion to GIF.</li>
<li>AiQualityControl: media quality inspection.</li>
<li>Evaluation: video assessment.</li>
<li>ImageProcess: image processing.</li>
<li>AddBlindWatermark: add a basic copyright digital watermark.</li>
<li>AddNagraWatermark: add a NAGRA digital watermark.</li>
<li>ExtractBlindWatermark: extract a basic copyright digital watermark.</li>
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
                     * 获取MPS park. ap-guangzhou park is returned by default.
<li>ap-guangzhou: Guangzhou.</li>
<li>ap-hongkong: Hong Kong (China).</li>
<li>ap-taipei: Taipei (China).</li>
<li>ap-singapore: Singapore.</li>
<li>ap-mumbai: India.</li>
<li>ap-jakarta: Jakarta.</li>
<li>ap-seoul: Seoul.</li>
<li>ap-bangkok: Thailand.</li>
<li>ap-tokyo: Japan.</li>
<li>na-siliconvalley: Silicon Valley.</li>
<li>na-ashburn: Virginia.</li>
<li>na-toronto: Toronto.</li>
<li>sa-saopaulo: São Paulo.</li>
<li>eu-frankfurt: Frankfurt.</li>
<li>eu-moscow: Russia.</li>
<li>aws: AWS.</li>
                     * @return ProcessRegions MPS park. ap-guangzhou park is returned by default.
<li>ap-guangzhou: Guangzhou.</li>
<li>ap-hongkong: Hong Kong (China).</li>
<li>ap-taipei: Taipei (China).</li>
<li>ap-singapore: Singapore.</li>
<li>ap-mumbai: India.</li>
<li>ap-jakarta: Jakarta.</li>
<li>ap-seoul: Seoul.</li>
<li>ap-bangkok: Thailand.</li>
<li>ap-tokyo: Japan.</li>
<li>na-siliconvalley: Silicon Valley.</li>
<li>na-ashburn: Virginia.</li>
<li>na-toronto: Toronto.</li>
<li>sa-saopaulo: São Paulo.</li>
<li>eu-frankfurt: Frankfurt.</li>
<li>eu-moscow: Russia.</li>
<li>aws: AWS.</li>
                     * 
                     */
                    std::vector<std::string> GetProcessRegions() const;

                    /**
                     * 设置MPS park. ap-guangzhou park is returned by default.
<li>ap-guangzhou: Guangzhou.</li>
<li>ap-hongkong: Hong Kong (China).</li>
<li>ap-taipei: Taipei (China).</li>
<li>ap-singapore: Singapore.</li>
<li>ap-mumbai: India.</li>
<li>ap-jakarta: Jakarta.</li>
<li>ap-seoul: Seoul.</li>
<li>ap-bangkok: Thailand.</li>
<li>ap-tokyo: Japan.</li>
<li>na-siliconvalley: Silicon Valley.</li>
<li>na-ashburn: Virginia.</li>
<li>na-toronto: Toronto.</li>
<li>sa-saopaulo: São Paulo.</li>
<li>eu-frankfurt: Frankfurt.</li>
<li>eu-moscow: Russia.</li>
<li>aws: AWS.</li>
                     * @param _processRegions MPS park. ap-guangzhou park is returned by default.
<li>ap-guangzhou: Guangzhou.</li>
<li>ap-hongkong: Hong Kong (China).</li>
<li>ap-taipei: Taipei (China).</li>
<li>ap-singapore: Singapore.</li>
<li>ap-mumbai: India.</li>
<li>ap-jakarta: Jakarta.</li>
<li>ap-seoul: Seoul.</li>
<li>ap-bangkok: Thailand.</li>
<li>ap-tokyo: Japan.</li>
<li>na-siliconvalley: Silicon Valley.</li>
<li>na-ashburn: Virginia.</li>
<li>na-toronto: Toronto.</li>
<li>sa-saopaulo: São Paulo.</li>
<li>eu-frankfurt: Frankfurt.</li>
<li>eu-moscow: Russia.</li>
<li>aws: AWS.</li>
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
                     * Start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date, which should be greater than or equal to the start date. Use the [ISO date and time format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Queries the MPS task type. The transcoding task is queried by default.
<li>Transcode: transcoding.</li>
<li>Enhance: enhancement.</li>
<li>AIAnalysis: intelligent analysis.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIReview: content moderation.</li>
<li>Snapshot: screenshot.</li>
<li>AnimatedGraphics: conversion to GIF.</li>
<li>AiQualityControl: media quality inspection.</li>
<li>Evaluation: video assessment.</li>
<li>ImageProcess: image processing.</li>
<li>AddBlindWatermark: add a basic copyright digital watermark.</li>
<li>AddNagraWatermark: add a NAGRA digital watermark.</li>
<li>ExtractBlindWatermark: extract a basic copyright digital watermark.</li>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * MPS park. ap-guangzhou park is returned by default.
<li>ap-guangzhou: Guangzhou.</li>
<li>ap-hongkong: Hong Kong (China).</li>
<li>ap-taipei: Taipei (China).</li>
<li>ap-singapore: Singapore.</li>
<li>ap-mumbai: India.</li>
<li>ap-jakarta: Jakarta.</li>
<li>ap-seoul: Seoul.</li>
<li>ap-bangkok: Thailand.</li>
<li>ap-tokyo: Japan.</li>
<li>na-siliconvalley: Silicon Valley.</li>
<li>na-ashburn: Virginia.</li>
<li>na-toronto: Toronto.</li>
<li>sa-saopaulo: São Paulo.</li>
<li>eu-frankfurt: Frankfurt.</li>
<li>eu-moscow: Russia.</li>
<li>aws: AWS.</li>
                     */
                    std::vector<std::string> m_processRegions;
                    bool m_processRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSAGEDATAREQUEST_H_
