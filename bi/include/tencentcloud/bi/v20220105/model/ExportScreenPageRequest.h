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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EXPORTSCREENPAGEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EXPORTSCREENPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ExportScreenPage request structure.
                */
                class ExportScreenPageRequest : public AbstractModel
                {
                public:
                    ExportScreenPageRequest();
                    ~ExportScreenPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Page ID.
                     * @return PageId Page ID.
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置Page ID.
                     * @param _pageId Page ID.
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Canvas type. Grid canvas: GRID; Free canvas: FREE.
                     * @return CanvasType Canvas type. Grid canvas: GRID; Free canvas: FREE.
                     * 
                     */
                    std::string GetCanvasType() const;

                    /**
                     * 设置Canvas type. Grid canvas: GRID; Free canvas: FREE.
                     * @param _canvasType Canvas type. Grid canvas: GRID; Free canvas: FREE.
                     * 
                     */
                    void SetCanvasType(const std::string& _canvasType);

                    /**
                     * 判断参数 CanvasType 是否已赋值
                     * @return CanvasType 是否已赋值
                     * 
                     */
                    bool CanvasTypeHasBeenSet() const;

                    /**
                     * 获取Image export type. Valid values: Base64, and URL (valid period: 1 day).
                     * @return PicType Image export type. Valid values: Base64, and URL (valid period: 1 day).
                     * 
                     */
                    std::string GetPicType() const;

                    /**
                     * 设置Image export type. Valid values: Base64, and URL (valid period: 1 day).
                     * @param _picType Image export type. Valid values: Base64, and URL (valid period: 1 day).
                     * 
                     */
                    void SetPicType(const std::string& _picType);

                    /**
                     * 判断参数 PicType 是否已赋值
                     * @return PicType 是否已赋值
                     * 
                     */
                    bool PicTypeHasBeenSet() const;

                    /**
                     * 获取Component IDs. When empty, export the entire page.
                     * @return WidgetIds Component IDs. When empty, export the entire page.
                     * 
                     */
                    std::vector<std::string> GetWidgetIds() const;

                    /**
                     * 设置Component IDs. When empty, export the entire page.
                     * @param _widgetIds Component IDs. When empty, export the entire page.
                     * 
                     */
                    void SetWidgetIds(const std::vector<std::string>& _widgetIds);

                    /**
                     * 判断参数 WidgetIds 是否已赋值
                     * @return WidgetIds 是否已赋值
                     * 
                     */
                    bool WidgetIdsHasBeenSet() const;

                    /**
                     * 获取Whether it is an async request.
                     * @return AsyncRequest Whether it is an async request.
                     * 
                     */
                    bool GetAsyncRequest() const;

                    /**
                     * 设置Whether it is an async request.
                     * @param _asyncRequest Whether it is an async request.
                     * 
                     */
                    void SetAsyncRequest(const bool& _asyncRequest);

                    /**
                     * 判断参数 AsyncRequest 是否已赋值
                     * @return AsyncRequest 是否已赋值
                     * 
                     */
                    bool AsyncRequestHasBeenSet() const;

                    /**
                     * 获取Transaction ID.
                     * @return TranId Transaction ID.
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置Transaction ID.
                     * @param _tranId Transaction ID.
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page ID.
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Canvas type. Grid canvas: GRID; Free canvas: FREE.
                     */
                    std::string m_canvasType;
                    bool m_canvasTypeHasBeenSet;

                    /**
                     * Image export type. Valid values: Base64, and URL (valid period: 1 day).
                     */
                    std::string m_picType;
                    bool m_picTypeHasBeenSet;

                    /**
                     * Component IDs. When empty, export the entire page.
                     */
                    std::vector<std::string> m_widgetIds;
                    bool m_widgetIdsHasBeenSet;

                    /**
                     * Whether it is an async request.
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * Transaction ID.
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EXPORTSCREENPAGEREQUEST_H_
