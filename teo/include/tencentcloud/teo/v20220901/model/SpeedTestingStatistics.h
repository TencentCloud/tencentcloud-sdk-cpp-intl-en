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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATISTICS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The site test result
                */
                class SpeedTestingStatistics : public AbstractModel
                {
                public:
                    SpeedTestingStatistics();
                    ~SpeedTestingStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Last contentful paint, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstContentfulPaint Last contentful paint, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetFirstContentfulPaint() const;

                    /**
                     * 设置Last contentful paint, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FirstContentfulPaint Last contentful paint, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFirstContentfulPaint(const int64_t& _firstContentfulPaint);

                    /**
                     * 判断参数 FirstContentfulPaint 是否已赋值
                     * @return FirstContentfulPaint 是否已赋值
                     */
                    bool FirstContentfulPaintHasBeenSet() const;

                    /**
                     * 获取Full content load, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstMeaningfulPaint Full content load, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetFirstMeaningfulPaint() const;

                    /**
                     * 设置Full content load, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FirstMeaningfulPaint Full content load, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFirstMeaningfulPaint(const int64_t& _firstMeaningfulPaint);

                    /**
                     * 判断参数 FirstMeaningfulPaint 是否已赋值
                     * @return FirstMeaningfulPaint 是否已赋值
                     */
                    bool FirstMeaningfulPaintHasBeenSet() const;

                    /**
                     * 获取Average download speed, in KB/s.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OverallDownloadSpeed Average download speed, in KB/s.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetOverallDownloadSpeed() const;

                    /**
                     * 设置Average download speed, in KB/s.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OverallDownloadSpeed Average download speed, in KB/s.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOverallDownloadSpeed(const double& _overallDownloadSpeed);

                    /**
                     * 判断参数 OverallDownloadSpeed 是否已赋值
                     * @return OverallDownloadSpeed 是否已赋值
                     */
                    bool OverallDownloadSpeedHasBeenSet() const;

                    /**
                     * 获取Rendering time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenderTime Rendering time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRenderTime() const;

                    /**
                     * 设置Rendering time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RenderTime Rendering time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRenderTime(const int64_t& _renderTime);

                    /**
                     * 判断参数 RenderTime 是否已赋值
                     * @return RenderTime 是否已赋值
                     */
                    bool RenderTimeHasBeenSet() const;

                    /**
                     * 获取DOM content loaded, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DocumentFinishTime DOM content loaded, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDocumentFinishTime() const;

                    /**
                     * 设置DOM content loaded, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DocumentFinishTime DOM content loaded, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDocumentFinishTime(const int64_t& _documentFinishTime);

                    /**
                     * 判断参数 DocumentFinishTime 是否已赋值
                     * @return DocumentFinishTime 是否已赋值
                     */
                    bool DocumentFinishTimeHasBeenSet() const;

                    /**
                     * 获取Average TCP connection, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TcpConnectionTime Average TCP connection, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTcpConnectionTime() const;

                    /**
                     * 设置Average TCP connection, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TcpConnectionTime Average TCP connection, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTcpConnectionTime(const int64_t& _tcpConnectionTime);

                    /**
                     * 判断参数 TcpConnectionTime 是否已赋值
                     * @return TcpConnectionTime 是否已赋值
                     */
                    bool TcpConnectionTimeHasBeenSet() const;

                    /**
                     * 获取Average backend response, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResponseTime Average backend response, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetResponseTime() const;

                    /**
                     * 设置Average backend response, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ResponseTime Average backend response, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseTime(const int64_t& _responseTime);

                    /**
                     * 判断参数 ResponseTime 是否已赋值
                     * @return ResponseTime 是否已赋值
                     */
                    bool ResponseTimeHasBeenSet() const;

                    /**
                     * 获取Average DOM content download, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileDownloadTime Average DOM content download, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetFileDownloadTime() const;

                    /**
                     * 设置Average DOM content download, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FileDownloadTime Average DOM content download, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileDownloadTime(const int64_t& _fileDownloadTime);

                    /**
                     * 判断参数 FileDownloadTime 是否已赋值
                     * @return FileDownloadTime 是否已赋值
                     */
                    bool FileDownloadTimeHasBeenSet() const;

                    /**
                     * 获取Load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadTime Load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetLoadTime() const;

                    /**
                     * 设置Load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LoadTime Load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLoadTime(const int64_t& _loadTime);

                    /**
                     * 判断参数 LoadTime 是否已赋值
                     * @return LoadTime 是否已赋值
                     */
                    bool LoadTimeHasBeenSet() const;

                private:

                    /**
                     * Last contentful paint, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_firstContentfulPaint;
                    bool m_firstContentfulPaintHasBeenSet;

                    /**
                     * Full content load, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_firstMeaningfulPaint;
                    bool m_firstMeaningfulPaintHasBeenSet;

                    /**
                     * Average download speed, in KB/s.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_overallDownloadSpeed;
                    bool m_overallDownloadSpeedHasBeenSet;

                    /**
                     * Rendering time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renderTime;
                    bool m_renderTimeHasBeenSet;

                    /**
                     * DOM content loaded, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_documentFinishTime;
                    bool m_documentFinishTimeHasBeenSet;

                    /**
                     * Average TCP connection, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tcpConnectionTime;
                    bool m_tcpConnectionTimeHasBeenSet;

                    /**
                     * Average backend response, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_responseTime;
                    bool m_responseTimeHasBeenSet;

                    /**
                     * Average DOM content download, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fileDownloadTime;
                    bool m_fileDownloadTimeHasBeenSet;

                    /**
                     * Load time, in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_loadTime;
                    bool m_loadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATISTICS_H_
