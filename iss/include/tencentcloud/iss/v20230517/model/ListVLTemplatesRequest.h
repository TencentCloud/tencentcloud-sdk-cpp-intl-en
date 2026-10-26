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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVLTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVLTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListVLTemplates request structure.
                */
                class ListVLTemplatesRequest : public AbstractModel
                {
                public:
                    ListVLTemplatesRequest();
                    ~ListVLTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Template name, exact match</p>
                     * @return Name <p>Template name, exact match</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Template name, exact match</p>
                     * @param _name <p>Template name, exact match</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Analysis mode filter, image / video</p>
                     * @return AnalysisMode <p>Analysis mode filter, image / video</p>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 设置<p>Analysis mode filter, image / video</p>
                     * @param _analysisMode <p>Analysis mode filter, image / video</p>
                     * 
                     */
                    void SetAnalysisMode(const std::string& _analysisMode);

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                    /**
                     * 获取<p>Screenshot type filter (this parameter is valid only when AnalysisMode=image): realtime/low</p>
                     * @return CaptureType <p>Screenshot type filter (this parameter is valid only when AnalysisMode=image): realtime/low</p>
                     * 
                     */
                    std::string GetCaptureType() const;

                    /**
                     * 设置<p>Screenshot type filter (this parameter is valid only when AnalysisMode=image): realtime/low</p>
                     * @param _captureType <p>Screenshot type filter (this parameter is valid only when AnalysisMode=image): realtime/low</p>
                     * 
                     */
                    void SetCaptureType(const std::string& _captureType);

                    /**
                     * 判断参数 CaptureType 是否已赋值
                     * @return CaptureType 是否已赋值
                     * 
                     */
                    bool CaptureTypeHasBeenSet() const;

                    /**
                     * 获取<p>Page number, which is 1 by default.</p>
                     * @return PageNumber <p>Page number, which is 1 by default.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number, which is 1 by default.</p>
                     * @param _pageNumber <p>Page number, which is 1 by default.</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page. Default value: 20. Maximum value: 200.</p>
                     * @return PageSize <p>Number of items per page. Default value: 20. Maximum value: 200.</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Number of items per page. Default value: 20. Maximum value: 200.</p>
                     * @param _pageSize <p>Number of items per page. Default value: 20. Maximum value: 200.</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Template name, exact match</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Analysis mode filter, image / video</p>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>Screenshot type filter (this parameter is valid only when AnalysisMode=image): realtime/low</p>
                     */
                    std::string m_captureType;
                    bool m_captureTypeHasBeenSet;

                    /**
                     * <p>Page number, which is 1 by default.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Number of items per page. Default value: 20. Maximum value: 200.</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVLTEMPLATESREQUEST_H_
